/*Confeccionar un programa que me permita calcular y mostrar una cantidad de números primos que se
solicita por la pantalla. Los números se calculan a partir del 2. Ejemplo: Si ingreso 6, genero los números: 2 –
3 - 5 - 7 - 11 - 13. El algoritmo para el cálculo de si un número es primo o no, debe estar optimizado para que
si encuentra un divisor no seguir buscando ya que se sabe que no es primo.*/

#include <stdio.h>

int main() {
    int cantidad, contador = 0, numero = 2;

    printf("Ingrese la cantidad de números primos a generar: ");
    scanf("%d", &cantidad);

    printf("Los primeros %d números primos son:\n", cantidad);

    // Genera y muestra los números primos
    while (contador < cantidad) {
        int esPrimo = 1;  // Suponemos que el número es primo inicialmente
        for (int i = 2; i * i <= numero; i++) {  // Solo verificamos hasta la raíz cuadrada de 'numero'
            if (numero % i == 0) {
                esPrimo = 0;  // Si encontramos un divisor, no es primo
                break;  // Salimos del bucle
            }
        }

        if (esPrimo==0) {
            printf("%d ", numero);  // Imprimimos el número si es primo
            contador++;  // Incrementamos el contador de números primos encontrados
        }
        numero++;  // Pasamos al siguiente número
    }

    printf("\n");

    return 0;
}