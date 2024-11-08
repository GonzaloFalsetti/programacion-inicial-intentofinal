#include <stdio.h>

int leeryvalidar(int, int);
int resto(int, int);
int espar(int);
int esprimo(int);
float promedio(int, int);

int main() {
    int num = 0, par, primo, cantidadPrimos = 0, cantPar = 0, sumaimpares = 0, cantImpar = 0;
    float promedioimpar = 0;

    do {
        num = leeryvalidar(1, 50);
        
        if (num == -10) break;

        primo = esprimo(num);
        if (primo == 1) {
            cantidadPrimos++;
        }

        par = espar(num);
        if (par == 1) {
            cantPar++;
        } else {
            sumaimpares += num;
            cantImpar++;
        }
        
        if (cantImpar > 0) {
            promedioimpar = promedio(cantImpar, sumaimpares);
        }

    } while (num != -10);

    printf("\n La cantidad de números primos es de: %d ", cantidadPrimos);
    printf("\n La cantidad de números pares es de: %d ", cantPar);
    printf("\n El promedio de los números impares es: %.2f ", promedioimpar);

    return 0;
}

int leeryvalidar(int numinf, int numsup) {
    int num = 0;
    printf("\n Ingrese números positivos entre 1 y 50:");
    scanf("%d", &num);

    while (num != -10 && (num < numinf || num > numsup)) {
        printf("\n Se ha ingresado un número fuera de rango. Ingrese nuevamente: ");
        scanf("%d", &num);
    }

    return num;
}

int resto(int dividendo, int divisor) {
    return dividendo % divisor;
}

int espar(int numero) {
    int retorno = 0;
    if (numero % 2 == 0) {
        retorno = 1;
    }
    return retorno;
}

int esprimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (resto(num, i) == 0) {
            return 0;
        }
    }
    return 1;
}

float promedio(int cantImpar, int sumaimpares) {
    if (cantImpar == 0) {
        return 0;
    }
    return (float) sumaimpares / cantImpar;
}