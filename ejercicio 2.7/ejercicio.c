/*2.7. Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena.*/

#include <stdio.h>

int main ()
{
    int num,resto,resto2, unidad,decena,centena;

    printf (" ingrese un numero de 3 cifras: ");
    scanf ("%d",&num);

    centena= num / 100;
    resto= num % 100;
    decena = resto /10;
    resto2 = resto % 10;
    unidad= resto2;




    printf ("\n UNIDAD: %d\nDECENA: %d\nCENTENA: %d",unidad,decena,centena);

    return 0;
}