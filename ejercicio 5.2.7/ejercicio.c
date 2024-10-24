/*Ingresar diversos quintetos de números positivos de 1 cifra c/u, finalizando cuando las cinco cifras leídas
sean iguales a cero. Determinar e informar cuantos de los quintetos ingresados han formado números
capicúas 'triples' y cuantos 'quíntuples'. */

#include <stdio.h>


int main ()
{
    int num1=0,num2=0,num3=0,num4=0,num5=0, quintuples=0, triples=0;



    do
    {
        printf ("ingrese un numero positivo de una cifra: ");
        scanf ("%d",&num1);
        printf ("ingrese un numero positivo de una cifra: ");
        scanf ("%d",&num2);
        printf ("ingrese un numero positivo de una cifra: ");
        scanf ("%d",&num3);
        printf ("ingrese un numero positivo de una cifra: ");
        scanf ("%d",&num4);
        printf ("ingrese un numero positivo de una cifra: ");
        scanf ("%d",&num5);

        if (num1!=0 && num2 !=0 && num3!=0 && num4 ==0 && num5 ==0)
        {
            triples++;
        }
        
        if (num1!=0 && num2 !=0 && num3!=0 && num4 !=0 && num5 !=0)
        {
            quintuples++;
        }
         
    } while (num1!=0 || num2 !=0 || num3!=0 || num4 !=0 || num5 !=0);
    

    printf ("\n la cantidad de capucuas triples es de %d y de quintuples es de %d ",triples,quintuples);




    return 0;
}