#include <stdio.h>

int codigodemozo(int, int, int);
int numerodeticket();
char tipodeproducto();
int cantidadpedida();
float preciounitario(int);

int main()
{
    int numerodemozo = 0, ticket = 0, cantidadped = 0, i = 0;
    int v1[15] = {0}, v2[15] = {0}, v4[15] = {0};
    int posmayor = 0, cerveza = 0, trago = 0, gaseosa = 0, otras = 0;
    int totalPedidos = 0;
    float ventatotal = 0.0, mayor = 0.0, comisionmozo[15] = {0.0};
    float v5[15] = {0.0};
    char tipoproducto;

    printf("\nIngrese el numero de mozo (101-115, 100 para finalizar): ");
    numerodemozo = codigodemozo(101, 115, 100);

    while (numerodemozo != 100)
    {
        printf("\nIngrese el numero de ticket del mozo %d: ", numerodemozo);
        ticket = numerodeticket();
        printf("\nIngrese el tipo de producto (C: cerveza, T: trago, G: gaseosa, O: otras): ");
        tipoproducto = tipodeproducto();
        printf("\nIngrese la cantidad pedida del mozo %d: ", numerodemozo);
        cantidadped = cantidadpedida();
        printf("\nIngrese el precio unitario del producto: ");
        float precio_unitario = preciounitario(cantidadped);

        float importe = precio_unitario * cantidadped;
        ventatotal += importe;

        if (importe > mayor) {
            mayor = importe;
            posmayor = ticket;
        }

        switch (tipoproducto)
        {
            case 'C': cerveza += cantidadped; break;
            case 'T': trago += cantidadped; break;
            case 'G': gaseosa += cantidadped; break;
            case 'O': otras += cantidadped; break;
        }

        v1[i] = numerodemozo;
        v2[i] = ticket;
        v4[i] = cantidadped;
        v5[i] = importe;
        comisionmozo[i] = importe * 0.05;
        i++;
        totalPedidos++;

        printf("\nIngrese el numero de mozo (101-115, 100 para finalizar): ");
        numerodemozo = codigodemozo(101, 115, 100);
    }

    float promedio = (totalPedidos > 0) ? ventatotal / totalPedidos : 0.0;
    int totalVentas = cerveza + trago + gaseosa + otras;

    printf("\nEl ticket con mayor consumo fue el numero: %d con un importe de: %.2f", posmayor, mayor);
    printf("\nPromedio de ventas en importe: %.2f", promedio);
    printf("\nPorcentaje de cervezas vendidas: %.2f%%", (cerveza * 100.0) / totalVentas);
    printf("\nPorcentaje de tragos vendidos: %.2f%%", (trago * 100.0) / totalVentas);
    printf("\nPorcentaje de gaseosas vendidas: %.2f%%", (gaseosa * 100.0) / totalVentas);
    printf("\nPorcentaje de otros productos vendidos: %.2f%%", (otras * 100.0) / totalVentas);

    printf("\n\nCodigo de Mozo | Cantidad Despachada | Importe Cobrado | Comision del Mozo\n");
    for (int j = 0; j < i; j++) {
        printf("%14d | %18d | %15.2f | %15.2f\n", v1[j], v4[j], v5[j], comisionmozo[j]);
    }

    return 0;
}

int codigodemozo(int liminf, int limsup, int dif)
{
    int retorno = 0, flag = 0;
    do {
        if (flag == 1)
            printf("\nNumero de mozo fuera de rango, ingrese nuevamente: ");
        flag = 1;
        scanf("%d", &retorno);
    } while (retorno != dif && (retorno < liminf || retorno > limsup));
    return retorno;
}

int numerodeticket()
{
    int numticket, flag = 0;
    do {
        if (flag == 1)
            printf("\nFuera de rango, ingrese nuevamente: ");
        flag = 1;
        scanf("%d", &numticket);
    } while (numticket <= 0);
    return numticket;
}

char tipodeproducto()
{
    char letra;
    int flag = 0;
    do {
        if (flag == 1)
            printf("\nLetra invalida, ingrese nuevamente: ");
        flag = 1;
        fflush(stdin);
        scanf(" %c", &letra);
    } while (!(letra == 'O' || letra == 'C' || letra == 'T' || letra == 'G'));
    return letra;
}

int cantidadpedida()
{
    int cantidadped, flag = 0;
    do {
        if (flag == 1)
            printf("\nFuera de rango, ingrese nuevamente: ");
        flag = 1;
        scanf("%d", &cantidadped);
    } while (cantidadped <= 0);
    return cantidadped;
}

float preciounitario(int cantidad)
{
    float preciopedido;
    int flag = 0;
    do {
        if (flag == 1)
            printf("\nFuera de rango, ingrese nuevamente: ");
        flag = 1;
        scanf("%f", &preciopedido);
    } while (preciopedido <= 0);
    return preciopedido;
}