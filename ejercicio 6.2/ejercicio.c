/*Se ingresan números enteros comprendidos entre 100 y 2000 (usar función LeerYValidar). Determinar
usando la función EstaDentroDelRango:
a. Cantidad de números ingresados entre 100 y 500
b. Cantidad de números pares ingresados entre 500 y 1200
c. Promedio de números ingresados entre 1200 y 2000
El ingreso de datos finaliza cuando se ingresa un número igual a 99.
Para realizar este programa se deben realizar las siguientes funciones:
• EstaDentroDelRango: que reciba 3 enteros correspondientes a un número a validar y los límites
superior e inferior del rango. La función debe retornar un 1 si el número a validar se encuentra
dentro del rango indicado o un 0 si no lo está.
• LeerYValidar: que reciba los límites superior e inferior de un rango y retorne un número que se
encuentre dentro del mismo. (El ingreso de datos se realiza dentro de la función). Para validar el
rango utilizar la función EstaDentroDelRango realizada en el punto anterior.
*/

#include <stdio.h>

int leeryvalidar (int,int);
int estadentrodelrango (int,int,int);

int main ()
{
    int numeros,numerovalidado,cantidadentre100y500=0,contadorpar500y1200=0,contador1200a2000=0,suma1200a2000=0;
    float promedio=0;

    numerovalidado = leeryvalidar (100,2000);
    
    while (numerovalidado != 99)
    {
        if (estadentrodelrango (numerovalidado,100,500)== 1)
        {
            cantidadentre100y500 ++;
        }
        if (estadentrodelrango (numerovalidado,500,1200)==1)
        {
            if (numerovalidado % 2 == 0)
            {
                contadorpar500y1200++;
            }
            
        }
        if (estadentrodelrango (numerovalidado,1200,2000))
        {
            contador1200a2000++;
            suma1200a2000 += numerovalidado;
            promedio= suma1200a2000 / contador1200a2000;
            
        }
        
        
        numerovalidado = leeryvalidar (100,2000);
    }
    
    printf ("\n La cantidad de numeros ingresados entre 100 y 500 es: %d \n La cantidad de numeros pares ingresados entre 500 y 1200 es de: %d \n El promedio de los numeros ingresados de 1200 a 2000 es de: %2.f",cantidadentre100y500,contadorpar500y1200,promedio);

    return 0;
}

int leeryvalidar (int numinf, int numsup)
{

    int numeros=0;

    printf ("\n ingrese numeros enteros comprendidos entre 100 y 2000: ");
    scanf ("%d",&numeros);
    while (numeros != 99 && (numeros<100 || numeros > 2000))
    {
        printf ("\n se ha ingresado un valor erroneo porfavor ingrese nuevamente: ");
        printf ("\n ingrese un numero: ");
        scanf ("%d",&numeros);
    }


    return numeros;
}

int estadentrodelrango (int numerovalidado , int numeroinf , int numerosup )
{

    int retorno=0;

    if (numerovalidado >= numeroinf && numerovalidado <= numerosup)
    {
        retorno = 1;
    }
    else
    {
        retorno = 0;
    }
    


    return retorno;

}