#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void Conversion(int num);

uint8_t Binario[];
uint8_t A = 0;

int main()
{
    int N = 0;
    uint8_t i = 0;

    printf("Ingresar un numero positivo: ");
    scanf("%d",&N);

    Conversion(N);

    return 0;
}

void Conversion(int num)
{
    int Resultado_F = 0;

    if(num<0)
    {
        printf("Error: Numero negativo\n");
        exit(-1);
    }
    else if(num>=1)
    {
        Resultado_F = num%2;
        Conversion(num/2);
    }

    printf("%d",Resultado_F);

}
