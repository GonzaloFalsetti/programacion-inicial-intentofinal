/*un reconocido balneario de la ciudad de pinamar cuenta en temporada
 con 15 mozos/as de la cafeteria del balneario identificados con un 
 codigo que atienden las carpas del complejo, cobrando un 5% del importe 
 de los pedidos despachados.Se pueden solicitar a los mozos/as los productos 
 que vende la cafeteria, donde cada uno de los mozos/as atiende una zona de carpas. 
 por cada pedido de solicita:
 
codigo del mozo/a(entero,entre 101 y 115)
numero de ticket de pago(entero,mayor a cero)
tipo de producto vendido(caracter, 'C':cerveza,'T':trago,'G':gaseosa,'O':otras)
cantidad pedida(entero,mayor a cero)
precio unitario(real,mayor a cero)

se considera que cada pedido solamente tiene un tipo de producto y que un mozo/a puede
atender a muchas carpas o ninguna(si estuvo ausente ese dia).la carga finaliza con un 
codigo de mozo igual a 100
se pide
a) al finalizar la jornada, indicar el numero de ticket que realizo mayor consumo en importe
b) el promedio de ventas en importes de cada uno de los mozos que estuvieron presentes
c) informar el procentaje vendido de cada uno de los tipos de producto
d) listar el codigo de mozo, cantidad despachada,importe cobrado y comisiond el mozo*/

#include <stdio.h>

int codigodemozo (int,int,int);
int numerodeticket ();
char tipodeproducto();
int cantidadpedida();
float preciounitario(int);
int main ()
{
    int numerodemozo=0,ticket=0,cantidadped=0,i=0,v1[15]={0},v2[15]={0},v4[15]={0},posmayor=0,cerveza=0,trago=0,gaseosa=0,otras=0,cantidadtotc=0,cantidadtott=0,cantidadtotg=0,cantidadtoto=0;
    float ventatotal=0,promedio=0;
    float precio=0,v5[15]={0},mayor=0,comisionmozo[15]={0};
    char tipoproducto,v3[15]={0};
    printf ("\n ingrese el numero de mozo: ");
    numerodemozo= codigodemozo (101,115,100);
    while (numerodemozo!=100)
    {
        printf ("\n ingrese el numero de ticket del mozo: %d: ",numerodemozo);
        ticket=numerodeticket();
        printf ("\n ingrese el tipo de pedido , C || T || G || O: ");
        fflush (stdin);
        tipoproducto= tipodeproducto ();
        printf ("\n ingrese la cantidad de pedidos del mozo %d: ",numerodemozo);
        cantidadped= cantidadpedida ();
        printf ("\n ingrese el precio unitario de la venta del mozo %d: ",numerodemozo);
        precio= preciounitario(cantidadped);
        i++;
        v1[i]=numerodemozo;
        v2[i]=ticket;
        v3[i]=tipoproducto;
        v4[i]=cantidadped;
        v5[i]=precio;

        mayor=precio;
        if (precio>mayor)
        {
            mayor=precio;
            posmayor= ticket;
        } 
        if (tipoproducto=='C')
        {
            cerveza++;
            cantidadtotc+=cantidadped;
        }
        if (tipoproducto=='T')
        {
            trago++;
            cantidadtott+=cantidadped;
        }
        if (tipoproducto=='G')
        {
            gaseosa++;
            cantidadtotg+=cantidadped;
        }
        if (tipoproducto=='O')
        {
            otras++;
            cantidadtoto+=cantidadped;
        } 

        comisionmozo[i]= precio * 0.5;

        printf ("\n ingrese el numero de mozo: ");
        numerodemozo= codigodemozo (101,115,100);   

    }

    for (i = 0; i < 15; i++)
    {
        v5[i]+= ventatotal;    
    }
    promedio= ventatotal/ 15;

    printf ("\n el numero de ticket que realizo la venta mas grande fue: %d con un precio de: %2.f",posmayor,mayor);
    printf ("\n el promedio de importe de cada uno de los mozos fue de: %2.f",promedio);
    printf ("\n el porcentaje de cervezas vendidas es de: %2.f ",(cerveza*100)/cantidadtotc);
    printf ("\n el porcentaje de tragos vendidas es de: %2.f ",(trago*100)/cantidadtott);
    printf ("\n el porcentaje de gaseosas vendidas es de: %2.f ",(gaseosa*100)/cantidadtotg);
    printf ("\n el porcentaje de otros vendidas es de: %2.f ",(otras*100)/cantidadtoto);
    
    printf ("\ncodigo de mozo: \t\t cantidad despachada: \t\t importe cobrado: \t\t comison del mozo: ");
    for (i = 0; i < 15; i++)
    {
        printf ("\n%d \t\t\t %d \t\t %2.f \t\t\t %2.f ",v1[i],v4[i],v5[i],comisionmozo[i]);
    }
    
    return 0;
}

int codigodemozo (int liminf, int limsup, int dif)
{
    int retorno=0,flag=0;

    do
    {
        if (flag==1)
        {
            printf ("\n se ha ingresado un numero de mozo fuera de rango, ingrese nuevamente:");
        }
        flag=1;
        scanf ("%d",&retorno);
        
        
        
    } while (retorno != dif && (retorno<liminf || retorno> limsup));

    return retorno;
}

int numerodeticket ()
{
    int flag=0,numticket;

    do
    {
        if (flag==1)
        {
            printf ("\n Fuera de rango, ingrese nuevamente: ");
        }
        flag=1;
        scanf ("%d",&numticket);
        
    } while (numticket<0);
    


    return numticket;
}
char tipodeproducto ()
{
    int flag=0;
    char letra;
    do
    {
        if (flag==1)
        {
            printf ("\n se ha ingresado una letra invalida, ingrese nuevamente: ");
        }
        flag=1;
        fflush (stdin);
        scanf ("%c",& letra);
        
        
    } while ( !(letra =='O'|| letra =='C'|| letra == 'T' || letra == 'G'));

    return letra;
}

int cantidadpedida ()
{
    int flag=0,cantidadped;

    do
    {
        if (flag==1)
        {
            printf ("\n Fuera de rango, ingrese nuevamente: ");
        }
        flag=1;
        scanf ("%d",&cantidadped);
        
    } while (cantidadped<0);


    return cantidadped;
}
float preciounitario (int cantidad)
{
    int flag=0;
    float preciopedido;

    do
    {
        if (flag==1)
        {
            printf ("\n Fuera de rango, ingrese nuevamente: ");
        }
        flag=1;
        scanf ("%f",&preciopedido);
        
    } while (preciopedido<0);
    
    return preciopedido*cantidad;
}