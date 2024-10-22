#include <stdio.h>

int main() {
    int N, i = 1;
    
    // Pedir al usuario el número de filas
    printf("Ingrese el número de filas: ");
    scanf("%d", &N);

    // Ciclo para imprimir el triángulo
    
        // Ciclo interno para imprimir los asteriscos
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Imprimir un salto de línea después de cada fila
        printf("\n");
        

    
    return 0;
}