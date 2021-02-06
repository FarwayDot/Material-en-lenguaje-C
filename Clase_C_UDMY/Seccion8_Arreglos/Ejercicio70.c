//Busqueda Secuencial

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int A[5] = {3,2,1,4,5};
	char band = 'F'; //False
	int dato = 0;
	uint8_t i = 0;
	
	dato = 4;
	//Busqueda
	i=0;
	while((band=='F') && (i<5))
	{
		if(A[i]==dato)
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
