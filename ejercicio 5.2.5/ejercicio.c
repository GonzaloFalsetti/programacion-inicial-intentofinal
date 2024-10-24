/*De cada uno de los alumnos de un curso se ingresa su número de DNI y las notas de los dos exámenes 
parciales confeccionar, un programa que muestre por cada alumno su condición final con el siguiente 
mensaje: 
“El alumno con DNI: xxxxxxx, obtuvo las notas: xx y xx [condición final]”
La condición final se establece según las siguientes reglas:
• PROMOCIONA: ambas notas > = 7
• RINDE EXAMEN FINAL: ambas notas > = 4
• REPROBO LA MATERIA: alguna nota no cumple lo anterior
El programa finaliza cuando se ingresa un valor negativo como número de DNI. Al finalizar mostrar la nota 
promedio de alumnos promocionados..*/


#include <stdio.h>

int main ()
{
    int dni=0,nota1=0,nota2=0,i=0,totalpromocionados=0;
    float notapromedio=0,promediopromocionados=0;


    do
    {
        i++;
        printf ("\n Ingrese el numero de dni del alumno %d : ",i);
        scanf ("%d",&dni);
        printf ("\n Ingrese la nota uno del alumno %d : ",i);
        scanf ("%d",&nota1);
        printf ("\n Ingrese la nota dos del alumno %d : ",i);
        scanf ("%d",&nota2);

        if (nota1 >= 7 && nota2 >=7)
        {
            printf ("\n el alumno %d promociono",i);
            totalpromocionados++;
            promediopromocionados += (nota1 + nota2) /2;

        }
        if (nota1 >= 4 && nota2 >= 4)
        {
            printf ("\n el alumno %d rinde examen final ",i);
        }
        else
        {
            printf ("\n el alumno %d reprobo la materia",i);
        }
        
        if (totalpromocionados > 0)
        {
            notapromedio = promediopromocionados / totalpromocionados;
        }
        


        
    } while (dni >= 0);

    
    printf ("\n la nota promedio de los alumnos promocionados es: %f",notapromedio);





    return 0;
}