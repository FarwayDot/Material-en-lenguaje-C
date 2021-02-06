#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main(void)
{
	int A[50][50];
	int  f = 0, c = 0;
	uint8_t i = 0, j = 0;
	
	printf("Digite el numero de filas: ");
	scanf("%i",&f);
	printf("Digite el numero de columnas: ");
	scanf("%i",&c);
	
	//printf("\nf = %i\nc = %i\n",f,c);
	
	for(i = 0; i < f; i++)
	{
		for(j = 0; j < c; j++)
		{	
			printf("Elemento [%u][%u]: ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i = 0; i < f; i++)
	{
		for(j = 0; j < c; j++)
		{	
			printf("Elemento [%u][%u]: %d   ",i+1,j+1,A[i][j]);
		}
		printf("\n");	
	}
}
