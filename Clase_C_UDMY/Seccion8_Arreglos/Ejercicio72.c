#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void main(void)
{
	int A[5] = {1,2,3,4,5}; //Debe encontrarse ordenado
	int inf = 0, sup = 0, mitad = 0, dato = 0;
	char band = 'F';
	
	dato = 3;
	
	inf = 0;
	sup = 5;
	
	while(inf<sup)
	{
		mitad = (inf + sup)/2;
		
		if(A[mitad] == dato)
		{
			band = 'V';
			break;		
		}
		if(A[mitad]>dato)
		{
			sup = mitad;
			mitad = (inf + sup)/2;
		}
		if(A[mitad]<dato)
		{
			inf = mitad;
			mitad = (inf + sup)/2;
		}
	}
	
	if(band == 'F')
	{
		printf("\nEl numero no existe");
	}
	else if(band == 'V')
	{
		printf("\nEl numero existe en la pos: %d",mitad);
	}
	
}
