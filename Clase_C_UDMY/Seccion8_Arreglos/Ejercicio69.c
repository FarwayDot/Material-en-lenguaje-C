/*
Ordenamiento por seleccion
Buscamos el elemento de minimo valor
Intercambiar con el prier elemento
Buscar el minimo del resto de la lista que queda
Intercambiar con el segundo
Y asi sucesivamente
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define SIZE	5

void main(void)
{
	
	int A[SIZE] = {1,4,2,9,7};
	int min = 0;
	uint8_t i = 0;
	uint8_t j = 0;
	uint8_t pos = 0;
	uint8_t aux = 0;
	
	for(i=0;i<SIZE;i++)
	{	
		min = i;
		
		for(j=i+1;j<=5;j++)
		{
			if(A[j]<A[min])
			{
				min = j;
			}
		}
		
		aux = A[i];
		A[i] = A[min];
		A[min] = aux;
	}
	
	for(i=0;i<SIZE;i++)
	{
		printf("\nA[%d]: %d",i,A[i]);
	}
}
