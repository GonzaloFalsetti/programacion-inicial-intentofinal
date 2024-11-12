/* 2-: Realizar una funcion que permita el ingreso de un dato validado.
Completar el codigo de la siguiente funcion que recibe dos vectores con datos ya cargados y debe verificar si son iguales.
 int VectoresIguales(char vec1[], char vec2[], int cant) {// COMPLETAR}
La funcion debe retornar la cantidad de caracteres mayusculas que tienen los vectores (solo se cuentan de un vector)
 si los vectores son iguales (contienen los mismos elementos en el mismo orden), o -1 si no son iguales.
*/

#include <stdio.h>

int leeryvalidar (int,int,int);
int vectoresiguales (char[],char[],int);

int main ()
{
    int cant=0,i=0,iguales=0;
    char vector1[10], vector2[10];
    
    printf ("\n ingrese un numero entre 1 y 10 para el tamanio de el vector de las letras y termina al ingresar 0: ");
    cant= leeryvalidar (1,10,0);
    for (i = 0; i < cant; i++)
    {
        printf ("\nIngrese %d letras %d : ",cant,i);
        fflush (stdin);
        scanf ("%c",&vector1[i]);
    }
    for (i = 0; i < cant; i++)
    {
        printf ("\n Ingrese %d letras %d : ",cant,i);
        fflush (stdin);
        scanf ("%c",&vector2[i]);
    }
    iguales= vectoresiguales (vector1,vector2,cant);

    if (iguales==1)
    {
        printf ("\n los vectores son iguales");
    }
    else
    {
        printf ("\n los vectores no son iguales");
    }
    



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

int vectoresiguales (char vector1 [], char vector2 [], int cant)
{

    int i=0,retorno=0;

    for (i = 0; i < cant; i++)
    {
        if (vector1[i]== vector2[i])
        {
            retorno=1;
        }
        else
        {
            retorno=0;
        }
        
    }
    


    return retorno;
}