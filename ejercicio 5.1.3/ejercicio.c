/*Se ingresan 50 números enteros. Determinar el promedio de los números pares.*/

#include <stdio.h>

int main ()

{
    int pares=0,numeros,sumapares=0;
    float promedio=0;

    for (int i = 0; i < 10; i++)
    {
        printf ("\n ingrese un numero entero: ");
        scanf ("%d",&numeros);

        if (numeros %2 == 0)
        {
            pares++;
            sumapares += numeros;
        }
        
    }

if (pares >0)
{
    promedio = (float)sumapares / pares;

    printf ("El promedio de los numeros pares es de : %.2f",promedio);
}
else
{
    printf ("no se ingresaron numeros pares");
}
   
    






    return 0;
}