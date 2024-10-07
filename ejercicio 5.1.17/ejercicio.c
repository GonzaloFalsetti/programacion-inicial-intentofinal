/*5.1.17 Ingresar N artículos (códigos) y sus correspondientes precios. Indicar el código del artículo más caro y el
precio del más barato. NOTA: todos los artículos tienen precios distintos.*/

#include <stdio.h>

int main ()
{
    char letra;
    do
    {
        printf (" ingrese: ");
        fflush (stdin);
        scanf ("%c",&letra);
        
    } while (letra != 'S' && letra != 'N');
    
// EL VALOR DEBE SER VERDADERO PARA QUE VUELVA A CORRER EL WHILE



    return 0;
}