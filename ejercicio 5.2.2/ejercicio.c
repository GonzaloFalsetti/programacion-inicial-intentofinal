/*Escribir las sentencias que permitan el ingreso correcto del valor numérico de un día y un mes
determinado. Por algún error volver a solicitar. 
*/

#include <stdio.h>

int main ()

{
    int dia=0,mes=0;

    printf ("\ningrese el dia del mes: ");
    scanf ("%d",&dia);
    
    while (dia >=31)
    {
        printf ("\ndato erroneo ingresado, intente nuevamente");
        printf ("\ningrese el dia del mes: ");
        scanf ("%d",&dia);
    }
    
    printf ("\ningrese el mes: ");
    scanf ("%d",&mes);

    while (mes >12)
    {
       printf ("\ndato erroneo ingresado, intente nuevamente");
       printf ("\ningrese el mes: ");
       scanf ("%d",&mes);
    }
    
    




}