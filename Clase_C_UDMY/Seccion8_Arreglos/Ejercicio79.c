#include <stdio.h>
#include <stdint.h>

#define SIZE	100

struct Empleado
{
	char Nombre[20];
	char Sexo;
	float Salario;	
}Empleado[SIZE];

void main(void)
{	
	float mayor=0.0, menor=9999999;
	uint8_t i = 0, pmay = 0, pmen = 0;
	uint8_t n = 0;
	
	printf("Ingresar el total de empleados: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{	
		fflush(stdin);
		printf("\n%d. Digite el nombre: ",i+1);
		gets(Empleado[i].Nombre);
		
		printf("Sexo: ");
		scanf(" %c",&Empleado[i].Sexo);
		
		printf("Digite salario: ");
		scanf("%f",&Empleado[i].Salario);
	}
	
	for(i=0;i<n;i++)
	{
		if(Empleado[i].Salario > mayor)
		{
			mayor = Empleado[i].Salario;
			pmay = i;
		}
		
		if(Empleado[i].Salario < menor)
		{
			menor = Empleado[i].Salario;
			pmen = i;
		}
	}
	
	printf("\n%s tiene el mayor salario: %.2f",Empleado[pmay].Nombre,Empleado[pmay].Salario);
	printf("\n%s tiene el menor salario: %.2f.",Empleado[pmen].Nombre,Empleado[pmen].Salario);
}
