/*7.4 Construir una función que reciba dos vectores enteros de igual tamaño y retorne un 1 si son guales o un 0
si no lo son.*/

#include <stdio.h>

int soniguales (int [],int []);

int main ()
{
    int va[5],vb[5],i=0,iguales=0;

    printf ("\n ingrese 5 valores para el primer vector: ");
    for ( i = 0; i < 5; i++)
    {
        printf ("\n numero %d: ",i+1);
        scanf ("%d",& va [i]);
    }
    printf ("\n ingrese 5 valores para el segundo vector: ");
    for ( i = 0; i < 5; i++)
    {
        printf ("\n numero %d: ",i+1);
        scanf ("%d",& vb [i]);
    }

    iguales= soniguales (va,vb);
    if (iguales==1)
    {
        printf ("\n los vectores son iguales");
    }
    else
    {
        printf ("\n los vectores no son iguales");
    }



    return 0;
}

int soniguales (int va[],int vb[])
{
    int retorno=0,contador=0,i=0;

   for (i = 0; i < 5; i++)
   {
        if (va[i]== vb[i])
        {
            contador++;
        }
   }

   if (contador== 5)
   {
     retorno=1;
   }
   


    return retorno;
}