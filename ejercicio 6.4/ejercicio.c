/*Se ingresa valores positivos entre 1 y 50, finalizando el ingreso con el valor -10, para ello generar una función
que valide dicho ingreso. Calcular:
a. Cuántos números son primos.
b. Cantidad de números pares.
c. Promedio de los números impares.
Utilizar las siguientes funciones:
• Resto: recibe por parámetro el Dividendo y el Divisor; Retorna el resto.
• EsPar: recibe por parámetro un número; Retorna 1 si es Par, 0 si es Impar; Invoca a la función Resto.
• EsPrimo: recibe por parámetro un número; Retorna 1 si es primo, 0 si no es primo; Invoca a la
función Resto. (un número es primero si solo es divisible por 1 y por sí mismo).
• Promedio: recibe por parámetro la suma y el contador; Retorna el promedio si contador > 0 sino
Retorna 0.*/


#include <stdio.h>


int leeryvalidar (int,int);
int resto (int,int);
int espar (int);
int esprimo (int);
float promedio (int,int);

int main ()
{
    int num=0,par,primo,cantiadprimo=0,cantpar=0,cantimpar=0,sumaimpares=0;
    float promedioimpar=0;
    
   num= leeryvalidar (1,50); 
    while (num != -10)    
    {
        
        
        
        primo=esprimo (num);
        if (primo == 1)
        {
            cantiadprimo++;
        }
        par= espar (num);
        if (par == 1)
        {
            cantpar++;
        }
        if (par==0)
        {
            cantimpar++;
            sumaimpares += num;
        }
        
        promedioimpar = promedio (cantimpar,sumaimpares); 


        num= leeryvalidar (1,50);
    }
    
    printf ("\n La cantidad de numeros primos es de: %d ",cantiadprimo);
    printf ("\n La cantidad de numeros pares es de: %d ",cantpar);
    printf ("\n El promedio de los numeros impares: %2.f ",promedioimpar);



    return 0;
}

int leeryvalidar (int numinf, int numsup)
{
    int num=0;

    printf ("\n Ingrese numeros positivos entre 1 y 50:");
    scanf ("%d",&num);

    while (num != -10 && (num < numinf || num > numsup))
    {
        printf ("\n se ha ingresado un numero fuera de rango ingrese nuevamente: ");
        scanf ("%d",& num);
    }

    return num;
}

int resto (int dividendo , int divisor)
{
    int resto=0;
    resto = dividendo % divisor;

    return resto;
}

int espar (int numero)
{
    int retorno=0;

    if (numero % 2 == 0)
    {
        retorno++;
    }
    


    return retorno;
}

int esprimo (int num)
{
    if (num <= 1) {
        return 0;  // Los números menores o iguales a 1 no son primos
    }

    // Verificamos si el número tiene algún divisor desde 2 hasta la raíz cuadrada de num
    for (int i = 2; i * i <= num; i++) {
        if (resto(num, i)== 0) 
        {  // Si Resto devuelve 1, significa que num es divisible por i
            return 0;  // No es primo, ya que tiene un divisor distinto de 1 y sí mismo
        }
    }

    return 1; 

}

float promedio (int cantimpar,int sumaimpares)
{


   if (cantimpar == 0) {
        return 0;
    }
    return (float) sumaimpares / cantimpar;
}