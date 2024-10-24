/*Se desea realizar un programa para calcular el sueldo final a pagar a cada empleado de una empresa. De
cada uno se tiene, sueldo básico, antigüedad, cantidad de hijos y estudios superiores (‘S’ o ‘N’). Además, se
conocen los porcentajes de aumento del sueldo que dependen de los siguientes factores:
• Si el empleado tiene más de 10 años de antigüedad: aumento del 10%
• Si el empleado tiene más de 2 hijos: aumento del 10%, si solo tiene uno 5%
• Si el empleado posee estudios superiores: aumento del 5%
Luego de ingresar los datos de un empleado se debe preguntar si se desea ingresar otro empleado o no. Se
termina la carga cuando no se deseen ingresar más empleados.
Determinar:
a. Por cada empleado: número de empleado, el sueldo básico y el nuevo sueldo.
b. Sueldo nuevo promedio de la empresa.*/

#include <stdio.h>

int main ()
{
    int sueldobasico=0,antiguedad=0,cantidaddehijos=0,i=0;
    float nuevosueldo=0;
    char estudiossuperiores,masempleados='N';


    printf ("\nIngrese una S si desea ingresar mas empledos o una N en caso de que sean todos:  ");
    fflush (stdin);
    scanf ("%c",&masempleados);

    while (masempleados !='N')
    {   
        i++;
        sueldobasico=0;
        nuevosueldo=0;
        cantidaddehijos=0;
        antiguedad=0;
        printf ("\n ingrese el sueldo basico del empleado %d : ",i);
        scanf ("%d",&sueldobasico);
        printf ("\n ingrese la antiguedad del empleado %d : ",i);
        scanf ("%d",& antiguedad);
        printf ("\n ingrese la cantidad de hijos del empleado %d : ",i);
        scanf ("%d",&cantidaddehijos);
        printf ("\n ingrese una S si el empleado %d posee estudios superiores o ingrese una N en caso de que no: ",i);
        fflush (stdin);
        scanf ("%c",&estudiossuperiores);
       
        nuevosueldo = sueldobasico;

        if (antiguedad > 10)
        {
            nuevosueldo += sueldobasico * 0.10;
        }

        if (cantidaddehijos > 2)
        {
            nuevosueldo += sueldobasico * 0.10;
        }
        else if (cantidaddehijos == 1)
        {
            nuevosueldo += sueldobasico * 0.05;
        }

        if (estudiossuperiores == 'S')
        {
            nuevosueldo += sueldobasico * 0.05;
        }
        

        printf ("\nel valor del sueldo basico del empleado %d es %d y el valor del sueldofinal es %2.f",i,sueldobasico,nuevosueldo);
        printf ("\nIngrese una S si desea ingresar mas empledos o una N en caso de que sean todos:  ");
        fflush (stdin);
        scanf ("%c",&masempleados);     
    }
    








    return 0;
}