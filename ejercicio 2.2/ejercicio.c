//2.2. Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio
#include <stdio.h>

int main()
{
    int nota1, nota2;
    float promedio;

    printf ("\n Ingrese la primer nota del parcial: ");
    scanf ("%d",&nota1);
    printf ("\n Ingrese la segunda nota del parcial: ");
    scanf ("%d",&nota2);

    promedio = (nota1 + nota2)/2;

    printf ("El promedio del alumno es de : %.2f",promedio);


    return 0;
}