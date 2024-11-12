/*1-: Realizar una funci�n que permita el ingreso de un dato validado.
int LeerYValidar(int limInf, int limSup, int dif) { //COMPLETAR }
limInf es el valor inicial del rango v�lido
 limSup es el valor final del rango v�lido
dif es un valor adicional que tambi�n es v�lido (este valor puede estar o no dentro del rango)
La funci�n debe retornar un valor correcto. En caso de que el ingreso sea incorrecto se lo debe volver a solicitar informando un
mensaje de error aclarando en el mensaje cuales son los valores esperados y el n�mero de reintento.
*/

#include <stdio.h>

int leeryvalidar (int,int,int);

int main ()
{
    int numero;

    printf ("\n ingrese un numero entre 1 y 50 y termina al ingresar 0: ");
    numero= leeryvalidar (1,50,0);



    return 0;
}

int leeryvalidar (int liminf,int limsup, int dif)
{
    int numerovalidado=0,flag=0;
    do
    {
        if (flag==1)
        {
            printf ("\n Valor incorrecto o fuera de rango, ingrese nuevamente: ");

        }
        flag=1;
        scanf ("%d",&numerovalidado);
        
    } while (numerovalidado!=dif && (numerovalidado<liminf || numerovalidado> limsup));
    


    return numerovalidado;
}


