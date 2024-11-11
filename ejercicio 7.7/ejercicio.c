/*7.7 Confeccionar un programa para:
a. Generar los vectores necesarios para guardar la información ingresada por teclado. Se ingresa los
datos de 300 artículos diferentes. De cada artículo se ingresa los siguientes datos:
• Código de artículo (int, entre 1 y 500).
• Clase de artículo (char, ‘A’ o ‘B’ o ‘C’ o ‘D’).
• Número de depósito donde se encuentra el artículo (int, entre 1 y 100).
• Stock (int, entre o y 2000).
• Punto de reposición (int, entre 500 y 1000).
b. Generar e informar el vector VB, que contenga los códigos de artículos de aquellos que hayan
quedado con el stock igual a cero.
c. Generar e informar el vector VC, que contengo a los códigos de artículos de aquellos que hayan
quedado con stock por debajo del punto de reposición.
d. Generar e informar el vector VD, que contengo los códigos de artículos de aquellos que están en los
depósitos entre el 15 y 50.
FUNCIONES:
I. Para generar los vectores del punto a).
II. Para generar el vector VB.
III. Para generar el vector VC.
IV. Para generar el vector VD.*/

#include <stdio.h>
#include <ctype.h>

void vectorespuntoa (int [],char [],int [],int[],int[]);
void vectorvb (int [],int[],int[]);
void vectorvc (int [],int [],int[],int[]);
void vectorvd (int[],int[],int[]);


int main ()
{
    int codigoarticulo[300],numdeposito[300],stock[300],puntodereposicion[300],vb[300],vc[300],vd[300];
    char clasedearticulo[300];
    
    vectorespuntoa (codigoarticulo,clasedearticulo,numdeposito,stock,puntodereposicion);
    vectorvb (codigoarticulo,stock,vb);
    vectorvc (codigoarticulo,stock,puntodereposicion,vc);
    vectorvd (codigoarticulo,numdeposito,vd);


    return 0;

}

void vectorespuntoa (int codigoarticulo [],char clasedearticulo[],int numdedeposito [],int stock [],int puntodereposicion [])
{
    int i=0,vectorclasetuupper[300];

    for (i = 0; i < 300; i++)
    {
        printf ("\n ingrese el codigo de articulo en un rango de 1 a 500: ");
        scanf ("%d",& codigoarticulo[i]);
        while (codigoarticulo[i]<1 || codigoarticulo[i]>500)
        {
            printf ("\n FUERA DE RANGO, ingrese nuevamente: ");
            scanf ("%d",&codigoarticulo[i]);
        }
        
    }

    for (i = 0; i < 300; i++)
    {
        printf ("\n ingrese el clase de articulo que va de a , b , c , d : ");
        fflush (stdin);
        scanf ("%c",& clasedearticulo[i]);
        clasedearticulo= toupper (vectorclasetuupper[i]);
        while (clasedearticulo[i]!='A' && clasedearticulo[i]!='B' && clasedearticulo[i]!='C' && clasedearticulo[i]!='D')
        {
            printf ("\n CLASE INVALIDA, ingrese nuevamente: ");
            fflush (stdin);
            scanf ("%c",&clasedearticulo[i]);
            clasedearticulo= toupper (vectorclasetuupper[i]);
        } 
    }
    
    for (i = 0; i < 300; i++)
    {
        printf ("\n ingrese el numero de deposito en un rango de 1 a 100: ");
        scanf ("%d",& numdedeposito[i]);
        while (numdedeposito[i]<1 || numdedeposito[i]>100)
        {
            printf ("\n FUERA DE RANGO, ingrese nuevamente: ");
            scanf ("%d",&numdedeposito[i]);
        }
        
    }

    for (i = 0; i < 300; i++)
    {
        printf ("\n ingrese el codigo de stock en un rango de 1 a 2000: ");
        scanf ("%d",& stock[i]);
        while (stock[i]<1 || stock[i]>2000)
        {
            printf ("\n FUERA DE RANGO, ingrese nuevamente: ");
            scanf ("%d",&stock[i]);
        }
        
    }
    for (i = 0; i < 300; i++)
    {
        printf ("\n ingrese el punto de reposicion en un rango de 500 a 1000: ");
        scanf ("%d",& puntodereposicion[i]);
        while (puntodereposicion[i]<500 || puntodereposicion[i]>1000)
        {
            printf ("\n FUERA DE RANGO, ingrese nuevamente: ");
            scanf ("%d",&puntodereposicion[i]);
        }
        
    }
}

void vectorvb (int codigoarticulo[],int stock[],int vb[])
{
    int i=0,contadorexterno=0;
    for (i = 0; i < 300; i++)
    {
        vb[i]=0;
    }
    

    for (i = 0; i < 300; i++)
    {
        if (stock[i]==0)
        {
            vb[contadorexterno]= codigoarticulo[i];
            contadorexterno++;
        }
        
    }
    printf ("\n Vector vb: ");
    for (i = 0; i < 300; i++)
    {
        printf (" %d ",vb[i]);
    }
    
}

void vectorvc (int codigoarticulo[],int stock[],int puntodereposicion[],int vc[])
{
    int i=0,contadorexterno=0;
    for (i = 0; i < 300; i++)
    {
        vc[i]=0;
    }
    

    for (i = 0; i < 300; i++)
    {
        if (stock[i]< puntodereposicion[i])
        {
            vc[contadorexterno]= codigoarticulo[i];
            contadorexterno++;
        }
        
    }
    printf ("\n Vector Vc: "); 
    for (i = 0; i < 300; i++)
    {
        printf (" %d ",vc[i]);
    }



}

void vectorvd (int codigoarticulo[],int numdeposito[],int vd[])
{
    /*Generar e informar el vector VD, que contengo los códigos de artículos de aquellos que están en los
depósitos entre el 15 y 50.*/
int i=0,contadorexterno=0;
for ( i = 0; i < 300; i++)
{
    vd[i]=0;
}

for (i = 0; i < 300; i++)
{
    if (numdeposito[i]>=15 && numdeposito [i]<=50)
    {
        vd[contadorexterno]= codigoarticulo[i];
        contadorexterno++;
    }
    
}




    printf ("\n Vector Vd: "); 
    for (i = 0; i < 300; i++)
    {
        printf (" %d ",vd[i]);
    }



}