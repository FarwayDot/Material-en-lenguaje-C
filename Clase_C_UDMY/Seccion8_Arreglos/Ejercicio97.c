#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main()
{
	int *p_Vector, *p_Vector_Convertido;
	uint8_t i = 0;
	
	//Para almacenar arreglo para 3 elementos
	p_Vector = malloc(3*sizeof(int));
	
	//Llenamos el arreglo
	p_Vector[0] = 1;
	p_Vector[1] = 5;
	p_Vector[2] = 15;
	
	printf("\n");
	
	for(i=0; i<3; i++)
	{
		printf("%d ",p_Vector[i]);
	}
	
	printf("\n");
	
	//
	p_Vector_Convertido = realloc(p_Vector,5*sizeof(int));
	
	p_Vector_Convertido[3] = 48;
	p_Vector_Convertido[4] = 55;
	
	for(i=0; i<5; i++)
	{
		printf("%d ",p_Vector_Convertido[i]);
	}
	
	free(p_Vector_Convertido);
	
}
