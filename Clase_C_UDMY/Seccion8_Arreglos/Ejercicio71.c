#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE	10

void Busqueda(int a[],int num);

void main(void)
{
	int A[SIZE] = {0,4,2,9,1,5,18,11,13,3};
	int num = 0;
	uint8_t i = 0;
	
	printf("Ingresar el numero que desea encontrar: ");
	scanf("%d",&num);
	
	Busqueda(A,num);
	
}

void Busqueda(int a[], int num)
{
	int i = 0;
	char band = 'F';
	
	while((band=='F') && (i<SIZE))
	{
		if(a[i]==num)
		{
			band = 'V'; //Verdadero
		}
		i++;
	}
	
	if(band == 'F')
	{
		printf("\nEl numero no existe");
	}
	else if(band == 'V')
	{
		printf("\nEl numero existe en la posicion: %d", i-1);
	}
	
}
