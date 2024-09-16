/*. La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente
escala: 
a. menor de $55 el descuento es del 4.5%
b. entre $55 y $100 el descuento es del 8%
c. más de $100 el descuento es del 10.5%
Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con
mensajes aclaratorios. */

#include <stdio.h>

int main ()
{
    float monto, valordescuentoa=0.45,valordescuentob=0.8,valordescuentoc=0.105, montofinal;
    printf (" ingrese el valor de la compra: ");
    scanf ("%f",& monto);
    
    
    if (monto < 55)
    {
        montofinal= monto * valordescuentoa;   
    }
    else if (monto >= 55 && monto <= 100)
    {
        montofinal= monto * valordescuentob;
    }
    else if (monto > 100)
    {
        montofinal= monto * valordescuentoc;
    }
 printf ("El valor de la compra es de: %.2f",montofinal);
    







    return 0;
}