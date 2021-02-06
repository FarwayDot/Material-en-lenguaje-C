
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void Ordenamiento_Ascendente( int a, int b, int c);

void main()
{
    int a = 0, b = 0, c = 0;

    printf("Ingresar 3 numeros: ");
    printf("\nNumero 1: ");
    scanf("%d",&a);
    printf("Numero 2: ");
    scanf("%d",&b);
    printf("Numero 3: ");
    scanf("%d",&c);

    Ordenamiento_Ascendente(a,b,c);

}

void Ordenamiento_Ascendente( int a, int b, int c)
{
    int Mayor = 0, Menor = 0, Mid = 0;

    if(a >= b && a >= c)
    {
        Mayor = a;

        if(b >= c)
        {
            Mid = b;
            Menor = c;
        }
        else
        {
            Mid = c;
            Menor = b;
        }
    }
    else if( b>=a && b>=c)
    {
        Mayor = b;

        if(a >= c)
        {
            Mid = a;
            Menor = c;
        }
        else
        {
            Mid = c;
            Menor = a;
        }
    }
    else
    {
        Mayor = c;

        if(a >= b)
        {
            Mid = a;
            Menor = b;
        }
        else
        {
            Mid = b;
            Menor = a;
        }
    }

    printf("\n%d >= %d >= %d",Mayor,Mid,Menor);
}
