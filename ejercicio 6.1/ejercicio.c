/*Realizar un programa que al ingresar solicite el ingreso de dos números enteros y luego muestre por
pantalla el siguiente menú (las xx de los números deben ser reemplazadas con los valores
correspondientes):
Menú de Opciones
---- -- --------
Numero 1: xx Numero 2: xx
1) Sumar
2) Restar
3) Multiplicar
4) Dividir
5) Ingresar Nuevos Números
6) Salir
Ingrese su opción:
Al ingresar el número de la opción del 1 al 4, se realiza la operación y muestra el resultado hasta que se
presione una tecla. Luego vuelve a mostrar el menú para poder realizar otra operación con los mismos
números. La opción 5 pide el ingreso de dos nuevos números de trabajo mientras que la opción 6 sale y
cierra el programa.
El ingreso de la opción debe estar validado y en caso de ingresarse un número no válido debe solicitarlo
nuevamente.
Usar una función para mostrar el menú y retornar el valor elegido.
*/

#include <stdio.h>

int MENU (int,int);

int main ()
{
    int num1,num2,menu;
    float suma,resta,multi,div;

    printf ("\n ingrese dos numeros enteros primer num: ");
    scanf ("%d",&num1);
    printf ("\n ingrese dos numeros enteros segundo num: ");
    scanf ("%d",&num2);   

    menu = MENU (num1,num2);

    while (menu != 6)
    {
        if (menu == 1)
        {
            suma= num1 + num2;
            printf ("\n funcion suma\n Resultado: %2.f ", suma);
        }
        if (menu == 2)
        {
            resta = num1 - num2;
            printf ("\n funcion resta\n Resultado: %2.f ",resta);
        }
        if (menu == 3)
        {
            multi = num1 * num2;
            printf ("\n funcion multiplicacion\n Resultado: %2.f ",multi);
        }
        if (menu == 4)
        {
            div = num1 / num2;
            printf ("\n funcion division\n Resultado: %2.f ",div);
        }
        if (menu == 5)
        {
            printf ("\n ingrese dos numeros enteros primer num: ");
            scanf ("%d",&num1);
            printf ("\n ingrese dos numeros enteros segundo num: ");
            scanf ("%d",&num2);
            menu = MENU (num1,num2);
        }
        
        menu = MENU (num1,num2);
    }
    







    return 0;
}

int MENU (int n1, int n2)
{
    int opcion=0;
    printf ("\n Menu de Opciones\n---- -- --------\nNumero 1: %d Numero 2: %d\n1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Ingresar Nuevos Numeros\n6) Salir\nIngrese su opcion: ",n1,n2);
    scanf ("%d",&opcion);
    while (opcion <1 || opcion > 6)
    {
        printf ("\n se han ingrsado valores incorrectos de menu porfavor ingrese nuevamente: ");
        printf ("\n Menu de Opciones\n---- -- --------\nNumero 1: %d Numero 2: %d\n1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Ingresar Nuevos Numeros\n6) Salir\nIngrese su opcion: ",n1,n2);
        scanf ("%d",&opcion);
    }
    
    return opcion;
}
