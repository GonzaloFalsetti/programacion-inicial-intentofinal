/*Se ingresan 3 números distintos. Determinar el mayor*/

#include <stdio.h>

int main ()
{
    int num1, num2 , num3, nummayor=0;

    printf ("ingrese el numero numero 1: ");
    scanf ("%d",& num1);
    printf ("ingrese el numero numero 2: ");
    scanf ("%d",& num2);
    printf ("ingrese el numero numero 3: ");
    scanf ("%d",& num3);


    if (num1 > num2 && num1> num3)
    {
        nummayor= num1;
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            nummayor= num2;
        }
        else
        {
          nummayor= num3;
        }
        
    }
    printf ("el numero mayor es: %d",nummayor);

    







    return 0;
}