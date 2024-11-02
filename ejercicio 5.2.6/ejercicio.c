/*Un negocio de perfumería efectúa descuentos en sus ventas según el importe de las mismas, con la
siguiente escala:
• menor a 50 pesos el 3.5 %
• entre 50 y 150 pesos el 10 %
• entre 151 y 300 pesos el 20 %.
• mayor a 300 pesos el 25 %
Confeccionar un programa que:
a. Solicite un importe y calcule el descuento a efectuar y el importe neto a cobrar, con mensajes
aclaratorios.
b. Informe el importe promedio de todas las ventas realizadas. 
Se debe contemplar que se puedan ingresar varios importes y para finalizar se ingresa un valor negativo o
cero.
*/

#include <stdio.h>


int main ()
{
    int importe=0,i=-1;
    float descuento=0,valoracobrar=0, importepromedio=0, importepromediototal=0;


    do
    {
        printf ("\n ingrese el importe del valor de compra: ");
        scanf ("%d",& importe);
        i++;
        if (importe < 50)
        {
            descuento = importe * 0.035;
            valoracobrar = importe -descuento;
            printf ("El importe con un descuento del 3.5 es de:  %2.f ",valoracobrar);
        }
        if (importe >=50 && importe <= 150)
        {
            descuento = importe * 0.1;
            valoracobrar = importe -descuento;
            printf ("El importe con un descuento del 10 es de:  %2.f ",valoracobrar);
        }
        if (importe >=151 && importe <= 300)
        {
            descuento = importe * 0.2;
            valoracobrar = importe -descuento;
            printf ("El importe con un descuento del 20 es de:  %2.f ",valoracobrar);
        }
        if (importe > 300)
        {
            descuento = importe * 0.25;
            valoracobrar = importe -descuento;
            printf ("El importe con un descuento del 25 es de:  %2.f ",valoracobrar);
        }
        importepromedio += importe;

    } while (importe >= 0);

    importepromediototal =importepromedio / i;
    
    printf ("\n el importe promedio es de %2.f ",importepromediototal);





    return 0;
}