/*5.1.16 Se ingresan DNI y la nota promedio de 10 alumnos. Determinar el DNI del alumno de mayor nota
promedio (considerar único).
*/

#include <stdio.h>

int main ()

{
    int dni=0, notamayor=1,nota=0,dnimayor=0;

    for (int i = 1; i < 4; i++)
    {
        printf ("\ningrese el dni del alumno n %d: ",i);
        scanf ("%d",&dni);
        printf ("\ningrese la nota del alumno %d: ",i);
        scanf ("%d",&nota);
        if (nota > notamayor)
        {
            notamayor = nota;
            dnimayor= dni;

        }
        
        
    }
    printf ("\nel alumno con mayor nota es DNI:%d",dnimayor);
    





    return 0;
}