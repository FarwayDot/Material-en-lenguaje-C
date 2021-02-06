#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void Cambio(uint8_t a[], uint8_t b[]);

void main()
{
    uint8_t A1[] = {1,4,3,9,5};
    uint8_t A2[5] ;
    uint8_t i = 0;

    Cambio(A1,A2);

}

void Cambio(uint8_t a[], uint8_t b[])
{
    uint8_t i = 0;

    for(i=0;i<5;i++)
    {
        b[i] = a[i];
    }

    for(i=0;i<5;i++)
    {
        printf("%d, ",b[i]);
    }
}
