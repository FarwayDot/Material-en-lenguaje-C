#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Info_Direccion
{
	char Direccion[30];
	char Ciudad[20];
	char Provincia[20];
};

struct Empleado
{
	char Nombre[20];
	struct Info_Direccion Dir_Empleado;
	float Salario;
}Empleado[2];

void main(void)
{
	uint8_t i = 0;
	
	for(i=0; i<2; i++)
	{
		fflush(stdin);
		
		printf("%d. Digite su nombre: ",i+1);
		gets(Empleado[i].Nombre);
		
		printf("Digite su direccion: ");
		gets(Empleado[i].Dir_Empleado.Direccion);
		
		printf("Digite su ciudad: ");
		gets(Empleado[i].Dir_Empleado.Ciudad);
		
		printf("Digite su provincia: ");
		gets(Empleado[i].Dir_Empleado.Provincia);
		
		printf("Digite su salario: ");
		scanf("%f", &Empleado[i].Salario);
		
		printf("\n");
	}
	
	for(i=0; i<2; i++)
	{
		printf("\n\nDatos del Empleado %d: ",i+1);
		printf("\nNombre: %s",Empleado[i].Nombre);
		printf("\nDireccion: %s",Empleado[i].Dir_Empleado.Direccion);
		printf("\nCiudad: %s",Empleado[i].Dir_Empleado.Ciudad);
		printf("\nProvincia: %s",Empleado[i].Dir_Empleado.Provincia);
		printf("\nSalario: %.2f",Empleado[i].Salario);
	}
	
}
