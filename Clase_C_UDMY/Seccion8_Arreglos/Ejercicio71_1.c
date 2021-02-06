#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void Busqueda(int a[],int size);

void main(void)
{
	int A[50];
	int size = 0;
	uint8_t i = 0;
	
	printf("Ingresar numero de elementos: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Elemento A[%d]: ",i);
		scanf("%d",&A[i]);
	}
		
	Busqueda(A,size);
}

void Busqueda(int a[],int size)
{
	int i = 0;
	int num = 0;
	char band = 'F';
	char question = 'Y';
	
	while((question == 'Y')||(question == 'y'))
	{
		printf("Ingresar el numero que desea encontrar: ");
		scanf("%d",&num);
	
		while((band=='F') && (i<size))
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
		
		printf("\nDesea continuar:\nSi->[Y]\nNo->[N]\nRpta: ");
		scanf(" %c",&question);
		
		band = 'F';
		i=0;
	}
	
}
