/*Dadas las edades y estaturas de 45 alumnos de un curso. Determinar:
a. Edad promedio.
b. Estatura promedio.
c. Cantidad de alumnos mayores de 10 años.
d. Cantidad de alumnos que miden menos de 1.40 cm.
*/

#include <stdio.h>


int main ()
{
    int edad,cantmaydiez=0,cantmenunocuatro=0;
    float estatura,promedio=0,sumatoriaestaturas=0;


    for ( int i = 0; i < 45; i++)
    {
        printf ("ingrese la edad del alumno %d: ",i);
        scanf ("%d",&edad);
        printf ("ingrese la estatura del alumno %d: ",i);
        scanf ("%f",&estatura);
        sumatoriaestaturas+=estatura;
        if (edad > 10)
        {
            cantmaydiez++;
        }
        if (estatura < 1.40)
        {
            cantmenunocuatro++;
        }
        
        

    }

    promedio = sumatoriaestaturas / 45;

    printf ("La estatura promedio es de: %f",promedio);
    printf ("La cantidad de alumnos mayores de 10 anios es de: %d",cantmaydiez);
    printf ("La cantidad de alumnos que miden menos de 1.40 es de: %d")
    





    return 0;
}