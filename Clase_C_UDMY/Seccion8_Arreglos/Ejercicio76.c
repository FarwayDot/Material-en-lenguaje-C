#include <stdio.h>
#include <stdint.h>

struct personal
{
	char Nombre[20];
	int Edad;
}Persona1,Persona2;
//Persona1 = {"Alejandro",19},
//Persona2 = {"Maria",25};

void main(void)
{	
	uint8_t i = 0;
	
	printf("1. Digite un nombre: ");
	gets(Persona1.Nombre);
	
	printf("\n\n2. Digite un nombre: ");
	gets(Persona2.Nombre);
	
	printf("\n\n1. Digite edad: ");
	scanf("%d",&Persona1.Edad);
	
	printf("\n\n2. Digite edad: ");
	scanf("%d",&Persona2.Edad);
	
	printf("1. Su nombre es: %s",Persona1.Nombre);
	printf("\nLa edad es: %d",Persona1.Edad);
	
	printf("\n\n2. Su nombre es: %s",Persona2.Nombre);
	printf("\nLa edad es: %d",Persona2.Edad);
}
