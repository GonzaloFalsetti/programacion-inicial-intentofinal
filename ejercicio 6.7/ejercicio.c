/*Confeccionar un programa que permita ingresar diversas ternas de valores enteros mayores que 0 y
menores que 99. Finalizar el ingreso cuando se informen 3 valores iguales a 96, 97 y 98. Determinar e
informar para cada terna, el mayor y el menor de los valores. Confeccionar y utilizar una función con
parámetros llamada MayorMenor, que permita calcular el menor o el mayor valor de la terna según un
parámetro de configuración.*/


#include <stdio.h>

void mayormenor (int,int,int);

int main ()
{
    int numero=0,num1, num2, num3,contadorfinal=0,i=0;


    


   
    
    while (contadorfinal <= 3 && (num1!= 96 && num1 != 97 && num1 !=98 && num2!= 96 && num2 != 97 && num2 !=98 && num3!= 96 && num3 != 97 && num3 !=98))
    {
        printf ("\n ingrese una terna de 3 valores: ");
        for (i = 0; i < 3; i++)
        {
            
            printf ("\n ingrese el valor numero %d:  ",i+1);
            scanf ("%d",&numero);
            while (numero<0 || numero > 99)
            {
                printf ("\n se ha ingresado un valor erroneo porfavor ingrese nuevamente: ");
                printf ("\n ingrese el valor numero %d: ",i+1);
                scanf ("%d",&numero);
            }

            if (i==0)
            {
                num1 = numero;
            }
            if ( i== 1)
            {
                num2 = numero;
            }
            if ( i == 2)
            {
                num3 = numero;
            }
            
            if (i==2)
            {
                mayormenor (num1,num2,num3);
            }
            
            
            
            
        }
        
    }
    


    




    return 0;
}

void mayormenor (int num1 , int num2, int num3)
{

    int mayor,menor;


    mayor = num1;

    if (mayor< num2)
    {
        mayor= num2;
    }
    if (mayor< num3)
    {
        mayor = num3;
    }

    menor = num1;

    if (menor> num2)
    {
        menor = num2;
    }
    if (menor> num3)
    {
        menor = num3;
    }


    printf ("\n El numero mayor de la terna es: %d \n El numero menor de la terna es: %d",mayor,menor);

    
}