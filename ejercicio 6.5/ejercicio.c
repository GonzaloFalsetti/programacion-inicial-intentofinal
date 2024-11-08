/*Confeccionar un programa que permita ingresar varias ternas de valores a punto flotante, que finalice al
ingresar una terna con los valores ORDENADOS en forma creciente. Para cada terna exhibir la siguiente
pantalla:
** OPCIONES POSIBLES **
1 – Mayor valor
2 – Promedio
3 – Suma
4 - Finalizar
** Digite su opción:
Según la opción deseada debe aparecer en pantalla el resultado, sin borrar el menú. No admitir otros
valores de opción. Confeccionar y utilizar una función PARA CADA UNA de las opciones y otra para detectar
la condición final.*/

#include <stdio.h>

void mayorvalor (int,int,int);
void promedio (int,int,int,int);
void suma (int,int,int);
int menu ();
int finalizar (int);


int main  ()

{
    int num1=0, num2=0, num3=0,opcion=0,mayorval=0,sumador=0,final;
    float promedios=0;

do
{
    if (sumador==0)
    {
          
        printf ("\n ingrese el orden de los valores en orden creciente para finalizar ");
        printf ("\n ingrese el numero 1: ");
        scanf ("%d",&num1);
        printf ("\n ingrese el numero 2: ");
        scanf ("%d",&num2);
        printf ("\n ingrese el numero 3: ");
        scanf ("%d",&num3);
        sumador++;
        
    }
    opcion = menu(); 

    if (opcion==1)
    {
       mayorvalor (num1,num2,num3);
    }
    if (opcion==3)
    {
        suma (num1,num2,num3);
    }
    if (opcion==2)
    {
        promedio (num1,num2,num3,sumador);
    }
    
    final= finalizar ( opcion);

    if (final==1)
    {
        sumador++;
        printf ("\n ingrese el orden de los valores en orden creciente para finalizar ");
        printf ("\n ingrese el numero 1: ");
        scanf ("%d",&num1);
        printf ("\n ingrese el numero 2: ");
        scanf ("%d",&num2);
        printf ("\n ingrese el numero 3: ");
        scanf ("%d",&num3);
        opcion=menu();
    }


    
    
   
} while (num1>num2 && num2>num3);


    return 0;
}

void mayorvalor (int num1, int num2, int num3)
{
    int max= num1;

    if (num2> max)
    {
        max= num2;
    }
    if (num3> max)
    {
        max = num3;
    }

    printf ("\n el mayor valor de la terna es el siguiente: %d",max);
}|

int menu()
{
    int retorno;

    printf ("\n ** OPCIONES POSIBLES **\n 1 - Mayor valor\n 2 - Promedio\n 3 - Suma\n 4 - Finalizar\n ** Digite su opcion: ");
    scanf ("%d",&retorno);
    while (retorno <1 || retorno >4)
    {
        printf ("\n SE HA INGRESADO UNA OPCION NO VALIDA, INGRESE NUEVAMENTE");
        printf ("\n ** OPCIONES POSIBLES **\n 1 - Mayor valor\n 2 - Promedio\n 3 - Suma\n 4 - Finalizar\n ** Digite su opcion: ");
        scanf ("%d",&retorno);
    }
    
    return retorno;
}

void promedio (int num1, int num2, int num3,int sumador)
{
    int suma=0;
    float retorno;

    suma= num1+num2+num3;
    retorno = suma /3;

    printf ("\n el promedio de la terna ingresada es: %2.f ",retorno);
}
int finalizar ( int num)
{
    int retorno;

    if (num == 4)
    {
        retorno = 1;
    }
    

    return retorno;
}

void suma (int num1,int num2 ,int num3)
{
    int suma=0;
    
    suma= num1+num2+num3;

    printf ("\n La suma de la terna de valores es: %d",suma);

}