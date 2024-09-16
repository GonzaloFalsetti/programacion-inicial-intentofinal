/*Ingresar 3 valores reales y:
a. Si los dos primeros son mayores al tercero informar “MAYORES AL TERCERO”.
b. Si los tres son iguales informar “TRES IGUALES .
c. Si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR”.*/

#include <stdio.h>

int main ()
{

int num1, num2 , num3;

    printf ("ingrese el numero numero 1: ");
    scanf ("%d",& num1);
    printf ("ingrese el numero numero 2: ");
    scanf ("%d",& num2);
    printf ("ingrese el numero numero 3: ");
    scanf ("%d",& num3);


    if (num1 > num2 || num2 > num3)
    {
        printf ("Mayores al tercero");
    }
    else if (num1 == num2 && num1 == num3)
    {
        printf ("Los 3 son iguales");
    }
    else if (num1 > num2 || num1 < num3)
    {
        printf ("Alguno es menor");
    }

    
    return 0;
}