#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define SIZE	20

void Intercambiar_Arrays(uint8_t a[], uint8_t b[]);

void main()
{
	uint8_t A[SIZE];
	uint8_t B[SIZE];
	
	printf("Nombre 1: ");
	gets(A);
	
	printf("\nNombre 2: ");
	gets(B);
	
	Intercambiar_Arrays(A,B);
	
}

void Intercambiar_Arrays(uint8_t a[], uint8_t b[])
{
	uint8_t C[SIZE];
	
	printf("\nNombre 1: %s",a);
	printf("\nNombre 2: %s",b);	
		
	strcpy(C,a);
	strcpy(a,b);
	strcpy(b,C);	
	
	printf("\nNombre 1: %s",a);
	printf("\nNombre 2: %s",b);	
	
}
