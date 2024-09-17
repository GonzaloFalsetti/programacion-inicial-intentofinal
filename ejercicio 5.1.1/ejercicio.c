/*Mostrar por pantalla los números pares comprendidos entre 100 y 500.*/

#include <stdio.h>

int main ()


{
    int i=100,numerosp;

    for (i; i <= 500; i++)
    {
        if (i % 2 == 0)
        {
            numerosp = i;
            printf ("\n %d",numerosp);
        }
        
    }
    

    return 0;
}