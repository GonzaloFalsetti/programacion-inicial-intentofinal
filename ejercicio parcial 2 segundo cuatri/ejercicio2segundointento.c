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


int leeyvalida (int,int,int);
void cantidaddeunidades100al200 (int[]);
void nounidadessolicitadas (int[]);
void nosuperaronpromedio (float,int[]);

int main ()
{
    int i=0,liminf=1, limsup=200, dif=0,codprod[200]={0},cantprod=0,totaldeunidadespedidas=0,contprom=0;
    float promedio=0;
    
    printf ("\n ingrese el codigo de producto deseado del 1 al 200 y finalice con 0: ");
    i= leeyvalida (liminf,limsup,dif);
    while (i!=0)
    {
        
        printf ("\n ingrese la cantidad de unidades del producto con codigo %d: ",i);
        scanf ("%d",& cantprod);
        codprod [i-1] += cantprod; 






            
        printf ("\n ingrese el codigo de producto deseado del 1 al 200 y finalice con 0: ");
        i= leeyvalida (liminf,limsup,dif);
    }
            
        for (i = 0; i < 200; i++)
        {
          totaldeunidadespedidas+= codprod[i];
          if (codprod[i]>0)
          {
            contprom++;
          }
          
        }

        promedio= totaldeunidadespedidas/contprom;

    cantidaddeunidades100al200 (codprod);
    nounidadessolicitadas (codprod);
    nosuperaronpromedio (promedio,codprod);




    return 0;
}

int leeyvalida (int liminf,int limsup,int dif)
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
        


    } while (retorno!=dif && (retorno<liminf||retorno>limsup));

    return retorno;
}

void cantidaddeunidades100al200 (int codprod[])
{
  //a. La cantidad de unidades solicitadas del producto 100 al 200. Informar cada uno de los códigos y su cantidad.
  int canttotal100al200=0,i=0;
  for (i = 100; i < 200; i++)
  {
    canttotal100al200+= codprod[i-1];  
  }

  if (canttotal100al200>0)
  {
    printf ("\n la cantidad total de unidades solicitadas de los productos 100 a 200 son: %d ",canttotal100al200);
  }
  for (i = 0; i < 200; i++)
  {
    printf ("\n codprod: %d \t\t cantunidades: %d ",i+1,codprod[i]);
  }
  

}
//b. Los códigos de productos que no tuvieron unidades solicitadas.

void nounidadessolicitadas (int codprod[])
{
  int i=0;
  printf ("\n los codigos de producto que no tuvieron unidades solicitadas son los siguientes: ");

  for (i = 0; i < 200; i++)
  {
    if (codprod[i]==0)
    {
      printf (" %d ",i+1);
    }
    
  }

}

//c. Los códigos de productos que no superaron el promedio del total de unidades pedidas.

void nosuperaronpromedio (float promedio, int codprod[])
{
  int i=0;

  printf ("\n los codigos de producto que no superaron el promedio del total de unidades pedidas son los siguientes: ");
  for (i = 0; i < 200; i++)
  {
    if (codprod[i] < promedio)
    {
      printf (" %d ",i+1);
    }
    
  }

}