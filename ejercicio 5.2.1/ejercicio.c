/*Confeccionar un programa que calcule e informe los valores de las potencias de 2 cuyo resultado sean
menores que 600. (1 2 4 8 16 …)
*/

#include <stdio.h>

int main ()
{
    int potenciasdos=1,i=0;

    while (potenciasdos < 512)
    {
        potenciasdos *=2;
        printf ("%d\n",potenciasdos);

    }
    



    return 0;
}