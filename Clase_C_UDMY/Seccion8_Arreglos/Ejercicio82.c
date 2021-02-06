#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define	N	10

struct Nota
{
	int Nota1;
	int Nota2;
	int Nota3;
};

struct Alumnos
{
	char Nombre[20];
	char Sexo[15];
	int Edad;
	struct Nota Nota;
	float Promedio;
	
}Alumno[N];


void main(void)
{	
	uint8_t num = 0;
	uint8_t i = 0;

	printf("%d. Ingresar la cantidad de alumnos: ",i+1);
	scanf("%d", &num);
	
	for(i=0; i<num; i++)
	{	
		fflush(stdin);
		
		printf("%d. Digite nombre: ",i+1);
		gets(Alumno[i].Nombre);
		
		printf("Digite Sexo: ");
		gets(Alumno[i].Sexo);
		
		printf("Digite la edad: ");
		scanf("%d",&Alumno[i].Edad);
		
		fflush(stdin);
		
		printf("Dite Nota 1: ");
		scanf("%d", &Alumno[i].Nota.Nota1);
		
		printf("Dite Nota 2: ");
		scanf("%d", &Alumno[i].Nota.Nota2);
		
		printf("Dite Nota 3: ");
		scanf("%d", &Alumno[i].Nota.Nota3);
		
		printf("\n");
	}
	
	for(i=0; i<3; i++)
	{
		Alumno[i].Promedio = 	(Alumno[i].Nota.Nota1 +
								Alumno[i].Nota.Nota2 +
								Alumno[i].Nota.Nota3)/3;
	}
	
	for(i=0; i<num; i++)
	{
		printf("\n\nDatos del Alumno %d: ",i+1);
		printf("\nNombre: %s",Alumno[i].Nombre);
		printf("\nSexo: %s",Alumno[i].Sexo);
		printf("\nEdad: %d",Alumno[i].Edad);
		printf("\nNota 1: %d",Alumno[i].Nota.Nota1);
		printf("\nNota 2: %d",Alumno[i].Nota.Nota2);
		printf("\nNota 3: %d",Alumno[i].Nota.Nota3);
		printf("\nPromedio %.2f",Alumno[i].Promedio);
	}
	
}

