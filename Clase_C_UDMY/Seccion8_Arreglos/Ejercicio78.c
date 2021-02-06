#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Corredor
{
	char Nombre[20];
	int Edad;
	char Sexo;
	char Club[20];
}Corredor1;

void Categoria(int Edad);

void main(void)
{
	printf("Ingresar el nombre: ");
	gets(Corredor1.Nombre);
	
	while(Corredor1.Edad<=0)
	{
		printf("\n\nIngresar la edad: ");
		scanf("%d",&Corredor1.Edad);	
	}
	
	printf("\n\nSexo: Masculino [M] o Femenino[F]: ");
	scanf(" %c",&Corredor1.Sexo);
	
	fflush(stdin);
	
	printf("\n\nIngresar Club: ");
	gets(Corredor1.Club);
	
	Categoria(Corredor1.Edad);
	
	printf("\nNombre: %s",Corredor1.Nombre);
	printf("\nEdad: %d",Corredor1.Edad);
	printf("\nSexo: %c",Corredor1.Sexo);
	printf("\nClub: %s",Corredor1.Club);
	
}

void Categoria(int Edad)
{
	if(Edad >0)
	{
		if(Edad <= 18)
		{
			printf("\nCategoria: Juvenil");
		}
		else if((Edad <=40)&&(Edad >18))
		{
			printf("\nCategoria: Senor");
		}
		else if(Edad > 40)
		{
			printf("\nCategoria: Veterano");
		}
		else
		{
			printf("\nSin Categoria");
		}
	}
	
	
	
}
