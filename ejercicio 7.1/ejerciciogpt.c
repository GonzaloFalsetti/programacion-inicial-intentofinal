#include <stdio.h>

void cargarvector(int v[], int tam);
void mostrarvector(int vector[], int tam);
void unirvectores(int v1[], int v2[], int vectorunido[], int tam);

int main()
{
    int v1[5], v2[5], vunido[10];
    int tam = 5;

    // Cargar los dos vectores
    cargarvector(v1, tam);
    cargarvector(v2, tam);

    // Unir los dos vectores en uno de tamaño 10
    unirvectores(v1, v2, vunido, tam);

    // Mostrar el vector unido
    mostrarvector(vunido, tam * 2);

    return 0;
}

void cargarvector(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void unirvectores(int v1[], int v2[], int vectorunido[], int tam)
{
    // Copiar elementos de v1 a vectorunido
    for (int i = 0; i < tam; i++)
    {
        vectorunido[i] = v1[i];
    }
    // Copiar elementos de v2 a vectorunido
    for (int i = 0; i < tam; i++)
    {
        vectorunido[tam + i] = v2[i];
    }
}

void mostrarvector(int vector[], int tam)
{
    printf("Los valores del vector unido son:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");
}
