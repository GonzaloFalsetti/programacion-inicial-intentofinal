/*2.4. Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms.
y mts. NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms.*/

#include <stdio.h>

int main ()
{
    int pies,yardas,pulgadas,cms,mts;

    printf ("ingrese la medida expesada en pies: ");
    scanf ("%d",&pies);

    yardas= pies /3;
    pulgadas= pies * 12;
    cms = 2.54 * pulgadas;
    mts = cms / 100;

    printf ("\nYARDAS:%d \nPULGADAS: %d\nCMS: %d\nMTS: %d",yardas,pulgadas,cms,mts);

    return 0;
}