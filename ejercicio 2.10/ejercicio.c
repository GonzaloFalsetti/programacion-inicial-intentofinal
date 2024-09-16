/*Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho valor calcule
la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera.*/

#include <stdio.h>

int main ()
{
    
    float radio, superficie,volumen,perimetro;

    printf ("ingrese el valor del radio: ");
    scanf ("%f",&radio);


    superficie= 3.14 * (radio * radio);

    perimetro= 2* 3.14* radio;

    volumen= 4/3 * 3.14 * radio * radio * radio;


    printf ("\n SUPERFICIE: %.2f \nPERIMETRO: %.2f \nVOLOUMEN: %.2f",superficie,perimetro,volumen); 


    




    return 0;
}