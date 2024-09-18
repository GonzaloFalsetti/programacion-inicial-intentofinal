/*Confeccionar un programa para calcular la suma de los primeros N números naturales. El valor de N lo 
solicita por teclado el programa.*/

#include <stdio.h>

int main ()
{
    int n=0,suma=0,numeros=0,s;

    printf ("\n ingrese la cantidad de numeros naturales a sumar: ");
    scanf ("%d",&n);
    s=n;
    
    for (int i=0; i < n; i++)
    {
        printf ("\n ingrese %d numeros naturales: ",s);
        scanf ("%d",&numeros);
        suma+= numeros;
        s--;
    }

    printf ("La suma de los numeros naturales es: %d ",suma);
    






    return 0;
}