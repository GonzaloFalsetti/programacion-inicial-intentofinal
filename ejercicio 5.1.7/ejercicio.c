/*Dadas 20 notas y legajos de alumnos de un curso. Determinar:
a. Cantidad de alumnos aplazados.
b. Cuando la nota sea mayor a 7, mostrar el mensaje: “El alumno con legajo xxx ha Promocionado”.*/

#include <stdio.h>

int main ()
{
    int notas,legajo,aplazos=0,promocionados=0;

    for (int i = 0; i < 20; i++)
    {
        printf ("\n ingrese el numero de alumno del 1 al 20: ");
        scanf ("%d",&legajo);
        printf ("\ningrese la nota del alumno %d en un rango de 1 a 10: ",legajo);
        scanf ("%d",&notas);
        if (notas < 4)
        {
            aplazos++;
        }
        else if (notas >= 7)
        {
            printf ("\nEL alumno %d ha promocionado",legajo);
            promocionados++;
        }
    }
    printf ("\nLa cantidad de alumnos aplazados es de: %d",aplazos);
    printf ("\nLa cantidad de alumnos promocionados es de: %d",promocionados);





    return 0;
}