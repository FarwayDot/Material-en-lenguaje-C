#include <stdio.h>
#include <stdlib.h>

#define LIMIT	100

int main(void)
{
	double *p_Array;
	int i = 0;
	
	p_Array = malloc(LIMIT * sizeof(double));
	
	if(p_Array == NULL)
	{
		printf("Error en la asignacion de memoria");
		return -1; //Intentar recuperar memoria
	}
	else
	{
		srand(time(NULL));
		for(i=0; i<LIMIT; i++)
		{
			p_Array[i] = 1 + rand()%((LIMIT+1)-1);
			printf("%.2lf. \n",p_Array[i]);
		}
	}
	
	return 0;	
}
