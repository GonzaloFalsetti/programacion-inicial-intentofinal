#include <stdio.h>

int main() {
    int numEmpleado = 1;
    float sueldoBasico, nuevoSueldo, sueldoTotal = 0;
    int antiguedad, hijos;
    char estudiosSuperiores;
    int cantidadEmpleados = 0;
    char continuar;

    do {
        // Ingreso de datos del empleado
        printf("\nEmpleado %d\n", numEmpleado);
        printf("Ingrese el sueldo básico: ");
        scanf("%f", &sueldoBasico);
        printf("Ingrese los años de antigüedad: ");
        scanf("%d", &antiguedad);
        printf("Ingrese la cantidad de hijos: ");
        scanf("%d", &hijos);
        printf("¿Posee estudios superiores? (S/N): ");
        scanf(" %c", &estudiosSuperiores);

        // Inicializamos el nuevo sueldo con el sueldo básico
        nuevoSueldo = sueldoBasico;

        // Aumento por antigüedad
        if (antiguedad > 10) {
            nuevoSueldo += sueldoBasico * 0.10;  // Aumento del 10%
        }

        // Aumento por cantidad de hijos
        if (hijos > 2) {
            nuevoSueldo += sueldoBasico * 0.10;  // Aumento del 10% si tiene más de 2 hijos
        } else if (hijos == 1) {
            nuevoSueldo += sueldoBasico * 0.05;  // Aumento del 5% si tiene 1 hijo
        }

        // Aumento por estudios superiores
        if (estudiosSuperiores == 'S' || estudiosSuperiores == 's') {
            nuevoSueldo += sueldoBasico * 0.05;  // Aumento del 5% si tiene estudios superiores
        }

        // Mostrar el sueldo básico y el nuevo sueldo del empleado
        printf("Empleado %d: Sueldo básico: %.2f, Nuevo sueldo: %.2f\n", numEmpleado, sueldoBasico, nuevoSueldo);

        // Acumulamos el total de sueldos para luego calcular el promedio
        sueldoTotal += nuevoSueldo;
        cantidadEmpleados++;

        // Preguntar si se desea ingresar otro empleado
        printf("¿Desea ingresar otro empleado? (S/N): ");
        scanf(" %c", &continuar);

        numEmpleado++;

    } while (continuar == 'S' || continuar == 's');

    // Calcular y mostrar el sueldo nuevo promedio de la empresa
    if (cantidadEmpleados > 0) {
        float sueldoPromedio = sueldoTotal / cantidadEmpleados;
        printf("\nSueldo nuevo promedio de la empresa: %.2f\n", sueldoPromedio);
    } else {
        printf("No se ingresaron empleados.\n");
    }

    return 0;
}