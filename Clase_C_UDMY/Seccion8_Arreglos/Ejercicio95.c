#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//Declaron un puntero
	int *p1;
	
	//Defino un espacio
	p1 = malloc(sizeof(int));
	
	//Condicion para ver si hay espacio suficiente
	if(p1 == NULL)
	{
		printf("Memoria Llena");
	}
	else
	{
		printf("Hay espacio");
		*p1 = 15;
		printf("\n%d",*p1);
	}
	
	//Limpiar espacio (como confirmacion)
	free(p1);
	
	//Imprimir para observar de que en verdad se borro el contenido
	printf("\n%d",*p1);
		
}
