/*7.1 Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere un
vector de 10 posiciones con el contenido de ambos vectores uno a continuación del otro. Mostrar el vector
generado.
*/


#include <stdio.h>

void cargarvector (int[5],int);
void mostrarvector (int[10],int);
void unirvectores (int[5],int[5],int[10],int);


int main ()
{
    int v1[5], v2[5], vunido[10],tam=5, tamm =10;

    

    cargarvector (v1,tam);
    cargarvector (v2,tam);
    unirvectores (v1,v2,vunido,tam);
    mostrarvector (vunido,tamm);
    
    return 0;
}

void cargarvector (int v1[5],int tam)
{
    int i=0;

    
    printf ("\n ingrese 5 valores enteros: ");
    for (i = 0; i < tam; i++)
    {
        printf ("\n Numero %d: ",i+1);
        scanf ("%d",& v1 [i]);

    }

}

void unirvectores (int v1[5],int v2 [5],int vectorunido[10], int tam)
{
    int i=0;


    for (i = 0; i < tam; i++)
    {
        vectorunido [i]= v1 [i];
         
    }
    for (i = 0; i < tam; i++)
    {
        vectorunido [tam+ i]= v2[i];
    }
    

}

void mostrarvector (int vectorunido[10],int tam)
{
    int i=0;

    printf ("\n los valores del vector unidos son: ");
    for (i = 0; i < tam; i++)
    {
        printf (" %d ",vectorunido[i]);
    }
    

}