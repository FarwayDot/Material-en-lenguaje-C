#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int Fibonacci(int n);

int main()
{
    int numero = 0;
    uint8_t i = 0;

    printf("Ingresar un numero: ");
    scanf("%d",&numero);

    for(i=1; i<=numero; i++)
    {
        printf("%d, ",Fibonacci(i));
    }

    system("pause");

    return 0;
}

/*
    0 1 1 2 3 5 8 ...
    fibonacci(1) = 1
    fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)

*/

int Fibonacci(int n)
{
    if((n == 0) || (n == 1))
    {
        return 1;
    }
    else
    {
        return (Fibonacci(n-1) + Fibonacci(n-2));
    }
}

