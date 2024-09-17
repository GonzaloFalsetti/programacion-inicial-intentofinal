/*Se ingresan 100 letras. Determinar la cantidad de vocales ingresadas.*/

#include <stdio.h>

int main ()
{
    int vocales=0;
    char letra;

    for (int i =0; i < 10; i++)
    {
        printf ("\n Ingrese un total de 100 letras num: %d : ",i);
        scanf ("%c",&letra);
        fflush (stdin);
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
           letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
           {
            vocales++;
           }

        
    }

    if (vocales > 0)
    {
        printf ("se ingresaron %d vocales",vocales);
    }
    else
    {
        printf ("no se ingresaron vocales");
    }
    
    



    return 0;
}

