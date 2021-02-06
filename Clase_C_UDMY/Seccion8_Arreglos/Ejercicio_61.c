#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main()
{
    uint8_t A[20];
    uint8_t B[20];

    printf("Ingresar un nombre: ");
    gets(A);

    printf("\n%s",A);
    
    //FUNCION ESPECIAL
    
    strcpy(B,A); // STRING COPY
    
    printf("\n%s",B);
}
