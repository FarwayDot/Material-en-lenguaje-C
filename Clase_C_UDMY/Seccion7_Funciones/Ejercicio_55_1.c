#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void N_numeros(int n);

int main()
{
    int N = 0;
    int Resultado = 0;

    printf("Ingresar un numero: ");
    scanf("%d",&N);

    N_numeros(N);

    return 0;
}

void N_numeros(int n)
{
    int Resultado_f = 0;

    if(n == 0)      //El 0 pone el límite
    {
        printf("0");
    }
    else if(n>0)    //Para los positivos
    {
        printf("%d, ",n);
        N_numeros(n-1);
    }
    else if(n<0)    //Para los negativos
    {
        printf("%d, ",n);
        N_numeros(n+1);
    }

}
