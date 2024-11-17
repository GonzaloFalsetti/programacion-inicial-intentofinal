/*Ejercicio 2.
Una empresa debe registrar los pedidos recibidos de cada uno de sus 200 productos a lo largo del día. Por cada pedido se recibe:

Código de producto (de 1 a 200)
Cantidad de unidades solicitadas
Se puede recibir más de un pedido por producto, uno o ninguno.

La carga de datos en un vector finaliza cuando se ingresa un producto con código igual a cero.

Al finalizar la carga, se debe informar:

a. La cantidad de unidades solicitadas del producto 100 al 200. Informar cada uno de los códigos y su cantidad.

b. Los códigos de productos que no tuvieron unidades solicitadas.

c. Los códigos de productos que no superaron el promedio del total de unidades pedidas.

Para el tratamiento y visualización de lo solicitado en el punto b, utilizar una función con parámetros.*/

#include <stdio.h>
int leeyvalida (int ,int,int );
int cantidaddeunidades (int[],int);
void cantunid100a200 (int[],int[],int);

int main ()
{

    int liminf=1,limsup=200,dif=0,codprod[200]={0},i=0,cantunid[200]={0};

    printf ("\n ingrese el codigo de producto de 1 a 200 e ingrese un 0 para finalizar el ingreso: ");
    codprod[i] = leeyvalida (liminf,limsup,dif);
    cantunid[i]= cantidaddeunidades (codprod,i);
    while (codprod[i]!=0)
    {
        i++;    
            
            
            
            
            
        printf ("\n ingrese el codigo de producto de 1 a 200 e ingrese un 0 para finalizar el ingreso: ");
        codprod[i] = leeyvalida (liminf,limsup,dif);
        cantunid[i]= cantidaddeunidades (codprod,i);



    }


   /*for (i = 0; i < 200; i++)
    {
       



    }*/
    





    return 0;
}





int leeyvalida (int limiteinf, int limsup,int dif)
{
    int retorno=0,flag=0;

do
{
     if (flag==1)
    {
        printf ("\n FUERA DE RANGO, ingrese nuevamente: ");
    }
    flag=1;
    scanf ("%d",&retorno);
} while (retorno!=dif && (retorno<limiteinf||retorno>limsup));
    
    return retorno;
}
int cantidaddeunidades (int codprod[],int i)
{
    int retorno=0;
    printf ("\n ingrese la cantidad de unidades solicitadas del producto %d ",codprod[i]);
    scanf ("%d",&retorno);

    return retorno;
}

void cantunid100a200 (int )
{



    
}