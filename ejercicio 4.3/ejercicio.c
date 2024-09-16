/*Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos
es igual a la suma de los otros dos. 
*/

#include <stdio.h>

int main()
{
    int num1, num2 , num3;

    printf ("ingrese el numero numero 1: ");
    scanf ("%d",& num1);
    printf ("ingrese el numero numero 2: ");
    scanf ("%d",& num2);
    printf ("ingrese el numero numero 3: ");
    scanf ("%d",& num3);


    if ((num1 + num2) == num3)
    {
        printf ("el numero %d es igual a la suma de num1 y num2",num3);
    }
    else if ((num2 + num3)== num1)
    {
        printf (" el numero %d es igual a la suma de num2 y num3", num1);
    }
    else
    {
        printf (" el numero %d es igual a la suma de num1 y num3", num2);
    }
    
    






    
    
    
    
    
    
    
    return 0;
}