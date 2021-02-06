#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define SIZE 20

void Inversion_Caracteres(uint8_t a[], uint8_t size);

void main(void)
{
	uint8_t Cadena[SIZE];
	uint8_t i = 0;
	uint8_t p = 0;
	uint8_t longitud = 0;
	
	printf("Ingresar cadena: ");
	gets(Cadena);
	
	longitud = strlen(Cadena);
	
	printf("# de Caracteres: %d\n",longitud);
	
	for(i = 0; i<strlen(Cadena); i++)
	{	
		printf(" %c,",Cadena[i]);
	}
	
	Inversion_Caracteres(Cadena, longitud);	
	
}

void Inversion_Caracteres(uint8_t a[], uint8_t size)
{	
	int8_t i = 0;
	
	printf("\n");
	
	for(i=size-1; i>=0; i--)
	{
		printf(" %c,",a[i]);
	}
	
}
