/*Confeccionar un programa que pueda ingresar una secuencia de caracteres hasta que se digite un *. Se
desea obtener e informar cuantos caracteres ingresados son numéricos y cuantos alfabéticos. Estos últimos
tienen que mostrarse separados por mayúsculas y minúsculas. También informar la cantidad de otros
símbolos que no sean ni letras ni números.
*/

#include <stdio.h>

int main ()
{
    int cantidadnum=0,cantidadletras=0,contadorsimbolos=-1;
    char caracter;

    do
    {
        printf ("\ningrese letras o numeros: ");
        fflush (stdin);
        scanf ("%c",&caracter);

             if (caracter >='0' && caracter <='9')
        {
            cantidadnum++;
        }

        else if (caracter >= 'a' && caracter <= 'z' )
        {
            cantidadletras++;
        }
        
        else
        
            contadorsimbolos++;
        

    } while (caracter !<'*');
    
    printf ("\nla cantidad de letras introducidas son: %d \ny la cantidad de numeros son: %d \nla cantidad de simbolos son: %d ",cantidadletras,cantidadnum,contadorsimbolos);



    return 0;
}