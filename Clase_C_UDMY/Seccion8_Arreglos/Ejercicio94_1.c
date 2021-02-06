#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p_Array;
	int i = 0;
	int longitud = 0;
	
	printf("Ingresar el numero de elementos: ");
	scanf("%d", &longitud);
	
	
	p_Array = malloc( longitud * sizeof(int));
	
	if(p_Array == NULL)
	{
		printf("Error en la asignacion de memoria");
		return -1; //Intentar recuperar memoria
	}
	else
	{
		srand(time(NULL));
		for(i=0; i<longitud; i++)
		{
			p_Array[i] = 1 + rand()%100;
			printf("%d \n",p_Array[i]);
		}
	}
	
	return 0;	
}
