#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void Invertir(int n);

void main()
{
    int N = 0;

    printf("Ingresar un numero positivo: ");
    scanf("%d",&N);

    Invertir(N);

}

void Invertir(int n)
{
    int Resultado = 0;

    if(n>0)
    {
        printf("%d",n%10);
        Invertir(n/10);
    }

}
