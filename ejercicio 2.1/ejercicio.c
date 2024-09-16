// 2.1. Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo
#include <stdio.h>

int main ()
{
    int horast, valorh;
    float sueldo;

    printf ("\n ingrese el valor por hora: ");
    scanf ("%d",&valorh);
    printf ("\n ingrese la cantidad de horas trabajadas: ");
    scanf ("%d",&horast);

    sueldo = valorh * horast;

    printf ("\n el sueldo del empleado es de: %.2f ",sueldo);


    return 0;
}