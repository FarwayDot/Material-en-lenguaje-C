#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define SIZE	6

uint16_t Arreglo_Numeros[SIZE]={10,9,53,7,200,15};
 
uint16_t Numero_Mayor(uint16_t arreglo[]);

void main()
{	
	uint16_t i=0;
	
	for(i=0; i<sizeof(Arreglo_Numeros)/2;i++)
	{	
		printf("\n%d",Arreglo_Numeros[i]);
	}
	
	printf("\nEl numero mayor es: %d",Numero_Mayor(Arreglo_Numeros));
	
	return 0;
}

uint16_t Numero_Mayor(uint16_t arreglo[])
{	
	uint8_t i=0,cont=0;
	uint16_t max=0;
	
	
	for(i=0; i<SIZE; i++)
	{
		if(arreglo[i]>=max)
		{
			max=arreglo[i];	
		}
	}
	
	return max;
}
