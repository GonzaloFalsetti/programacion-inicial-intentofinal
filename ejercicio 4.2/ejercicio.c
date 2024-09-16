/*Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que
los otros dos.*/

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


    if (num1 < num2 && num1< num3)
    {
        printf ("el numero menor es el numero 1");
    }
    else
    {
        if (num2 < num1 && num2 < num3)
        {
           printf ("el numero menor es el numero 2");
        }
        else
        {
           printf ("el numero menor es el numero 3");

        }
        
    }
   

    return 0;
}