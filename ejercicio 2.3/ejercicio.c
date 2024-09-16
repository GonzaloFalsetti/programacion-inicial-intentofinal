/*2.3. Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con mensajes
aclaratorios la suma, el producto, el cociente y el resto.*/

#include <stdio.h>

int main ()
{
    int num1,num2;
    float suma,producto,cociente,resto;

    printf ("Ingrese el primer valor: ");
    scanf ("%d",&num1);
    printf ("\n Ingrese el segundo valor: ");
    scanf ("%d",&num2);

    suma = num1+num2;
    producto = num1 * num2;
    cociente = num1 / num2;
    resto = num1 % num2;

    printf ("\n SUMA: %.2f\n PRODUCTO: %.2f\n COCIENTE: %.2f\n RESTO: %.2f",suma,producto,cociente,resto);


    return 0;
}