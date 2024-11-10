/*7.3 Realizar los siguientes vectores con 10 valores reales. Confeccionar un programa para:
a. Generar el vector VA con la información ingresada por teclado.
b. Generar el vector VB, donde cada elemento es la raíz cuadrada del respectivo elemento de VA.
(para el cálculo de la raíz cuadrada utilizar la función sqrt disponible en la biblioteca math.h). Si el
número es negativo poner un 0 ya que no se puede calcular la raíz
c. Calcular el vector VC como VA+VB.
d. Copiar el vector VC en orden inverso en otro vector llamado VD.
e. Hallar el valor máximo del vector VA y en qué posición se halló (el mayor es único).
f. Generar un vector VE con aquellos valores negativos que se encuentran en el vector VA.
g. Mostrar el contenido de todos los vectores.
FUNCIONES:
I. Para el ingreso del vector AA, del punto a.
II. Para generar el vector CC, del punto c.
III. Para generar el vector VE del punto g.
IV. Para mostrar los valores de todos los vectores del punto h.
*/

#include <stdio.h>
#include <math.h>

void ingresovaa (float []);
void generarvcc (float [],float [],float[]);
void generarve (float [],float []);
void mostarvalores (float [],float[],float[],float[],float[]);

int main ()
{
    int i=0,posmayor=0;
    float va[10],vb[10],vc[10],vd[10],ve[10],raiz,mayorvalorva;

    ingresovaa (va);
    for (i = 0; i < 10; i++)
    {
        raiz = sqrt (va[i]);
        if (va[i]<0)
        {
            raiz=0;
        }
        vb[i]=raiz;
        
    }
    generarvcc (va,vb,vc);
    for (i = 0; i < 10; i++)
    {
        vd[9-i]= vc[i];
    }

    for (i = 0; i < 10; i++)
    {
        if (i==0)
        {
            mayorvalorva= va[i];
            posmayor=i+1;
        }
        
        
        if (va[i]>mayorvalorva)
        {
            mayorvalorva = va[i];
            posmayor= i+1;
        }

        
    }
    generarve (va,ve);
    mostarvalores (va,vb,vc,vd,ve); 
    printf ("\n el mayor valor del vector va es %2.f y esta en la posicion %d",mayorvalorva,posmayor);  



    return 0;
}

void ingresovaa (float vaa[])
{
    int i=0;

    printf ("\n ingrese 10 valores para el vector va: ");
    for (i = 0; i < 10; i++)
    {
        printf ("\n numero %d: ",i+1);
        scanf ("%f",& vaa[i]);
    }

}

void generarvcc (float va[],float vb[],float vc[])
{
    int i=0;

    for (i = 0; i < 10; i++)
    {
        vc[i]=va[i]+vb[i];
    }
    
}

void generarve (float va[], float ve[])
{
    int i=0;

    for (i = 0; i < 10; i++)
    {
        if (va[i]<0)
        {
            ve[i]=va[i];
        }
        else
        {
            ve[i]=0;
        }
        
    }
    

}

void mostarvalores (float va[],float vb[],float vc[],float vd[],float ve[])
{
    int i=0;
    printf ("\n los valores de todos los vectores son los siguientes: ");
    for (i = 0; i < 10; i++)
    {
        if (i==0)
        {
            printf ("vector va: \n");
        }
        
        printf (" %2.f ",va[i]);
    }
    printf ("\n");
    for (i = 0; i < 10; i++)
    {
        if (i==0)
        {
            printf ("vector vb: \n");
        }
        
        printf (" %2.f ",vb[i]);
    }
    printf ("\n");
    for (i = 0; i < 10; i++)
    {
        if (i==0)
        {
            printf ("vector vc: \n");
        }
        
        printf (" %2.f ",vc[i]);
    }
    printf ("\n");
    for (i = 0; i < 10; i++)
    {
        if (i==0)
        {
            printf ("vector vd: \n");
        }
        
        printf (" %2.f ",vd[i]);
    }
    printf ("\n");
    for (i = 0; i < 10; i++)
    {
        if (i==0)
        {
            printf ("vector ve: \n");
        }
        
        printf (" %2.f ",ve[i]);
    }
    printf ("\n");
}

