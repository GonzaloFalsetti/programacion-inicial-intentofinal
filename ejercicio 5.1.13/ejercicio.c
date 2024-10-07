/*Realizar un programa que:
a. Muestre todos los números primos entre 1 y 100. (Un nro. es primo cuando es divisible solamente
por 1 y por sí mismo)
b. Contar y mostrar la cantidad de primos encontrados*/
#include <stdio.h>

int main()
{

    int contprimos=0;

    for (int i = 2; i < 100; i++)
    {
        if (i==2)
        {
            contprimos++;
        }
        if (i==3)
        {
            contprimos++;
        }
                if (i==5)
        {
            contprimos++;
        }
                if (i==7)
        {
            contprimos++;
        }
        if (i%2==0||i%3==0||i%5==0||i%7==0)
        {
            contprimos+=0;
        }
        else
        {
            contprimos++;
            printf ("\n %d",i);
            
        }
        
        
    }
    printf("\n se encontraron %d numeros primos",contprimos);
    





    return 0;
}