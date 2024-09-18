/*Ingresar N y N Números naturales. Determinar e informar:
a. La sumatoria de los valores múltiplos de 3.
b. La cantidad de valores múltiplos de 5.
c. La sumatoria de los valores que se ingresan en orden par.
*/

#include <stdio.h>

int main ()
{
    int n=0,numeros=0,s,multtres=0,contadormultcinco=0,sumapar=0;

    printf ("\n ingrese la cantidad de numeros naturales a sumar: ");
    scanf ("%d",&n);
    s=n;
    
    for (int i=0; i < n; i++)
    {
        printf ("\n ingrese %d numeros naturales: ",s);
        scanf ("%d",&numeros);
        s--;

        if (numeros %3 == 0)
        {
            multtres += numeros;
        }
        if (numeros %5 == 0)
        {
            contadormultcinco++;
        }
        if (i %2 == 0)
        {
            sumapar+= numeros;
        }
        
        
        
    }

    printf ("La sumatoria de los valores multiplos de 3 es: %d\n",multtres);
    printf ("La cantidad de valores multiplos de 5 es: %d \n ",contadormultcinco);
    printf ("La sumatoria de los valores que se ingresan en orden par es: %d \n",sumapar);

    
    






    return 0;
}