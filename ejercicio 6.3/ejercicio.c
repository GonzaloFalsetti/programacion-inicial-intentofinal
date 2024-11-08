/*Se realizó un concurso de tiro al blanco. Por cada participante se ingresa un número que lo identifica y el
resultado de los disparos efectuados. El ingreso finaliza con un número de participante negativo.
Cada participante efectúa 5 disparos, registrándose las coordenadas X-Y de cada disparo. 
No considere disparos sobre los ejes, pero sí en el centro (si es sobre los ejes las coordenadas
deberán volver a ingresarse).
• Para determinar el cuadrante utilizar la función CUADRANTE que reciba las dos coordenadas y
retorne el cuadrante al cual pertenece (1 a 4) y 0 para indicar un tiro en el centro.
Para calcular el puntaje utilizar la función PUNTAJE que reciba 5 parámetros que representan la cantidad
disparos en cada cuadrante y en el centro. La función debe retornar el puntaje obtenido según la siguiente
escala:
✓ Cuadrantes 1 y 2: 50 puntos
✓ Cuadrantes 3 y 4: 40 puntos
✓ Centro: 100 puntos
Determinar:
a. El puntaje obtenido por cada participante, detallando cuantos disparos realizó en cada cuadrante.
b. Mostrar el número del participante ganador y el puntaje obtenido.
c. Calcular y mostrar la cantidad total de disparos en el centro (de todos los participantes)*/

#include <stdio.h>


float cuadrante (float,float);
int puntaje (int,int,int,int,int);

int main ()
{
    int punt=0,participante,cuad,i=0,disparocent=0,disparocuad1=0,disparocuad2=0,disparocuad3=0,disparocuad4=0;
    float cordx,cordy;
    printf ("\n ingrese el numero de participante: ");
    scanf ("%d",&participante);


    while (participante >= 0)
    {
        for (i = 0; i < 5; i++)
        {
            printf (" \ningrese las cordenadas X del disparo %d: ",i);
            scanf ("%f",&cordx);
            printf (" \ningrese las cordenadas Y del disparo %d: ",i);
            scanf ("%f",&cordy);

            while ((cordx == 0 && (cordy >0 || cordy < 0))||(cordy == 0 && (cordx >0 || cordx < 0)))
            {
                printf ("\n CORDENADAS INCORRECTAS, INGRESE NUEVAMENTE");
                printf (" \ningrese las cordenadas X del disparo %d: ",i);
                scanf ("%f",&cordx);
                printf (" \ningrese las cordenadas Y del disparo %d: ",i);
                scanf ("%f",&cordy);
                
            }
            
            
            cuad= cuadrante (cordx,cordy);

           switch (cuad)
          {
             case 0:

                disparocent++;
                break;

             case 1:
                disparocuad1++;
                break;
            
             case 2:
                disparocuad2++;
                break;

             case 3:
                disparocuad3++;
                break;

             case 4:
                disparocuad4++;
                break;

          }


        
        
        }

            punt= puntaje (disparocent,disparocuad1,disparocuad2,disparocuad3,disparocuad4);
            printf ("\n El puntaje total del participante %d es: %d",participante,punt);
            printf ("\n Disparos del participante %d Al centro: %d cuadrante1: %d cuadrante2: %d cuadrante3: %d cuadrante4: %d",participante,disparocent,disparocuad1,disparocuad2,disparocuad3,disparocuad4);
            printf ("\n ingrese el numero de participante: ");
            scanf ("%d",&participante);
            disparocent=0;
            disparocuad1=0;
            disparocuad2=0;
            disparocuad3=0;
            disparocuad4=0;
        
        
    }




    return 0;
}

float cuadrante (float x, float y)
{
    int cuadrante;
    
    if (x==0 && y==0)
    {
        cuadrante =0;
    }
    if (x>0 && y > 0)
    {
        cuadrante=1;
    }
    if (x<0 && y>0)
    {
        cuadrante =2;
    }
    if (x<0 && y< 0)
    {
        cuadrante =3;
    }
    if (x>0 && y<0)
    {
        cuadrante =4;
    }

    return cuadrante;
}

int puntaje (int cent, int cuad1, int cuad2 , int cuad3 , int cuad4)
{   
    int puntajetotal=0;

/*
✓ Cuadrantes 1 y 2: 50 puntos
✓ Cuadrantes 3 y 4: 40 puntos
✓ Centro: 100 puntos
*/
puntajetotal= cent*100+((cuad1+cuad2)*50)+((cuad3+cuad4)*40);

    

    return puntajetotal;
}