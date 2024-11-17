/*Ejercicio 1.
Se ingresan valores enteros entre -80 y 80 inclusive, finalizando el ingreso con el valor 150. 
Se debe validar el ingreso mediante una función para no permitir un número fuera del rango permitido.

Calcular e informar:
a. Cantidad de números impares ingresados. Para determinar si el número es impar, utilizar una función que retornará 1 si es par, o 0 si no lo es.

b. Promedio de los números pares. Para el cálculo del promedio utilizar una función que retornará el promedio (si puede realizarse el cálculo), 
o retornará cero en caso contrario.

c. El mayor valor ingresado y su orden de ingreso, solo para informar ambos valores utilizar una función.

*/

#include <stdio.h>

int leeryvalidar (int,int,int);
int espar (int);
float promediopar(int,int);
void mayorvaloring (int,int);

int main ()
{   
    int numverif=0,liminf=-80,limsup=80,dif=150,numpar=0,cantpar=0,cantimpar=0,sumapares=0,mayor=0,i=0,posmayor=0;
    float promediopares=0;

    printf ("\n ingrese valores enteros entre -80 y 80 y finalice el ingreso ingresando 150: ");
    numverif=leeryvalidar (liminf,limsup,dif);
    mayor= numverif;
    
    while (numverif!=150)
    {
        i++;
        numpar = espar (numverif);
        if (numpar == 0)
        {
            cantimpar++;
        }
        else if (numpar==1)
        {
            cantpar++;
            sumapares+= numverif
        }

        
        if (numverif>mayor)
        {
            mayor=numverif;
            posmayor=i;

        }
        
        
        printf ("\n ingrese valores enteros entre -80 y 80 y finalice el ingreso ingresando 150: ");
        numverif=leeryvalidar (liminf,limsup,dif);
        

    }
    promediopares= promediopar (cantpar,sumapares);
    printf ("\n la cantidad de numero impares es la siguiente: %d ",cantimpar);
    printf ("\n el promedio de los numero pares es el siguiente: %2.f", promediopares);
    mayorvaloring (mayor,posmayor);
    





    return 0;
}


int leeryvalidar (int liminf,int limsup,int dif)
{
    int retorno=0,flag=0;

    do
    {
        if (flag==1)
        {
            printf ("\n se ingreso un numero fuera de rango, ingrese nuevamente: ");
        }
        flag=1;
        scanf ("%d",&retorno);
        
    } while (retorno!=dif && (retorno<liminf||retorno>limsup));
    




    return retorno;
}

int espar (int numero)
{
    int retorno;

    if (numero %2 == 0)
    {
        retorno=1;
    }
    else
    {
        retorno=0;
    }
    


    return retorno;
}

float promediopar (int cantpar, int sumapares)
{
    float retorno=0;

    retorno = sumapares/ cantpar;

    if (cantpar<0)
    {
        retorno=0;
    }

    return retorno;
}

void mayorvaloring(int mayor,int posisionmayor)
{

    printf ("\n El mayor valor ingresado es: %d y fue ingresado en la posicion: %d ",mayor,posisionmayor);

}