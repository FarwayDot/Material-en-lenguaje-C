#include <stdio.h>
#include <stdint.h>

#define SIZE	2

struct personal
{
	char Nombre[20];
	int Edad;
}Persona[SIZE];
//Persona1,
//Persona2,
//...
//Persona5;

void main(void)
{	
	uint8_t i = 0;
	
	for(i=0;i<SIZE;i++)
	{	
		fflush(stdin);
	
		printf("\n\n%d. Digite un nombre: ",i+1);
		gets(Persona[i].Nombre);
		
		printf("Digite edad: ");
		scanf("%d",&Persona[i].Edad);
	}
	
	for(i=0;i<SIZE;i++)
	{
		printf("%\n\n%d. Su nombre es: %s",i+1,Persona[i].Nombre);
		printf("\nLa edad es: %d",Persona[i].Edad);
	
	}
}
