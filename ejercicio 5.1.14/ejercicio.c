/*5.1.14 Confeccionar un programa que determine e informe los números perfectos comprendidos entre 1 y 9000.
Un número es perfecto cuando es igual a la suma de sus divisores positivos menores que él. 
*/
#include <stdio.h>

int main ()
{
        int suma, i, j;

    printf("Números perfectos entre 1 y 9000:\n");
    
    for (i = 1; i <= 9000; i++) {
        suma = 0;

        // Encontrar los divisores de i
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                suma += j;
            }
        }

        // Comprobar si la suma de divisores es igual al número
        if (suma == i) {
            printf("%d\n", i);
        }
    }




    return 0;
}