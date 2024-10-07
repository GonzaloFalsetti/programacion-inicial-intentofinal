/*Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 3 disparos,
registrándose las coordenadas X-Y de cada disparo. Determinar:
a. Cuantos disparos se efectuaron en cada cuadrante por cada participante
b. Cuantos disparos se efectuaron en total en el centro.
NOTA: no considere disparos sobre los ejes.*/

#include <stdio.h>

int main()
{

    int cuadrante1=0,cuadrante2=0,cuadrante3=0,cuadrante4=0, totalcentro=0,cordenadasx=0,cordenadasy=0;


    for (int i = 1; i <= 5; i++)
    {
       for (int j = 1; j <= 3; j++)
       {

        printf ("\n ingrese cordenadadas X del disparo n %d del participante %d: ",j,i);
        scanf ("%d",&cordenadasx);
        printf ("\n ingrese cordenadadas y del disparo n %d del participante %d: ",j,i);
        scanf ("%d",&cordenadasy);
        if (cordenadasx>0 && cordenadasy>0)
        {
            cuadrante1++;
        }
        if (cordenadasx<0 && cordenadasy > 0)
        {
            cuadrante2++;
        }
        if (cordenadasx < 0 && cordenadasy < 0)
        {
            cuadrante3++;
        }
        if (cordenadasx > 0 && cordenadasy < 0)
        {
            cuadrante4++;
        }
        if (cordenadasx == 0 & cordenadasy == 0)
        {
            totalcentro++;
        }
        
       }
       printf (" El participante n: %d realizo \n en el primer cuadrante %d tiros, \n en el segundo cuadrante %d tiros, \n en el tercer cuadrante %d tiros , \n en el cuarto cuadrante %d tiros",i,cuadrante1,cuadrante2,cuadrante3,cuadrante4);

        cordenadasx = 0;
        cordenadasy = 0;
        cuadrante1=0;
        cuadrante2=0;
        cuadrante3=0;
        cuadrante4=0;
    }
    
    printf (" se realizaron en total %d disparos al centro",totalcentro);





    return 0;
}