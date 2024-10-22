/*Un negocio de venta de granos desea controlar las ventas realizadas. De cada una ingresa el importe total
y un código que indica la forma de pago. El código puede ser:
• C: cheque, 20% de recargo.
• E: efectivo, 10% de descuento.
• T: con tarjeta, 12% de recargo.
Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
Efectivo en Caja: $ xxxx.xx
Ventas con Tarjeta de Crédito: $ xxxx.xx
Ventas con cheque: $ xxxx.xx
Total de Venta: $ xxxx.xx
Importe del IVA: $ xxxx.xx
Nota: El IVA corresponde al 21% del total de ventas..
*/

#include <stdio.h>

int main ()
{
    int c=120  , t=112 , valordecompra=0 , efectivoencaja=0 , totaltarjetadecredito=0 ,credito=0,cheque=0, totalefectivo=0, totalcheques=0 , totaldelaventa=0 , importeiva=0;
    char tipodepago;
    
    printf ("\n ingrese el tipo de pago de la compra e,t,c: ");
        fflush (stdin);
        scanf ("%c",&tipodepago);
    while (tipodepago != 'f')
    {

        
        printf ("\n ingrese el valor de la compra: ");
        scanf ("%d",&valordecompra);

        if (tipodepago == 'e')
        {
            efectivoencaja = valordecompra - (valordecompra * 0.1);
            totalefectivo += efectivoencaja;
        }
        if (tipodepago == 't')
        {
            credito = (valordecompra *t)/100;
            totaltarjetadecredito += credito ;
        }
        if (tipodepago == 'c')
        {
            cheque = (valordecompra * c)/100;
            totalcheques += cheque;
        }

        totaldelaventa = (totalcheques + totaltarjetadecredito + totalefectivo);
        importeiva = (totaldelaventa * 0.21);

        printf ("\n ingrese el tipo de pago de la compra e,t,c: ");
        fflush (stdin);
        scanf ("%c",&tipodepago);

    }
    printf ("\nEfectivo en Caja: %d \nVentas con Tarjeta de Crédito: %d \nVentas con cheque: %d \nTotal de Venta: %d \nImporte del IVA: %d",totalefectivo,totaltarjetadecredito,totalcheques,totaldelaventa,importeiva);
    



    return 0;
}