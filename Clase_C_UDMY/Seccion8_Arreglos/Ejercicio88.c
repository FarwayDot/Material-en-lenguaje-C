#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void main(void)
{	
	//Vector de 10 elementos
	int Vector[10] = {1,2,3,4,4,7,8,9,5,4};
	//Puntero llamado p_V
	int *p_V;
	//Iterador
	int  i = 0;
	
	
	p_V = Vector; //p_V = V[0];
	
	for(i=0; i<10; i++)
	{
		printf("Dato n[%d]: %d", i, *p_V);
		printf("\nPosicion: %p",p_V);
		printf("\n\n");
		p_V++;
	}
	
}
