/*7.2 Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere un
vector de 10 posiciones con el contenido de ambos vectores intercalados. Mostrar el vector generado.*/

#include <stdio.h>


void funcionintercalar (int [5],int [5]);

int main ()
{
    int i=0,v1[5],v2[5],vintercalado[10],posicion=0;
    
    printf ("\n ingrese 5 valores para el primer vector: ");
    for (i = 0; i < 5; i++)
    {
        printf ("\n valor %d: ",i+1);
        scanf ("%d",& v1[i]);
        
    }
    printf ("\n ingrese 5 valores para el segundo vector: ");
    for (i = 0; i < 5; i++)
    {
        printf ("\n valor %d: ",i+1);
        scanf ("%d",& v2[i]);
        
    }
    
    funcionintercalar (v1,v2);




    return 0;
}

void funcionintercalar (int v1[5],int v2[5])
{
    int i=0, intercalado[10],j=0;

    for (i = 0; i < 10; i++)
    {
        if (i%2==0)
        {
            intercalado [i]= v1[j];
        }
        else
        {
            intercalado [i]= v2[j];
            j++;
        }
        
    }
    printf ("\n el vector intercalado es el siguiente: ");
    for (i = 0; i < 10; i++)
    {
        printf (" %d ",intercalado[i]);
    }
    
}
