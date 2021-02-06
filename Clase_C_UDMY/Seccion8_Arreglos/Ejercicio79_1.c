#include <stdio.h>
#include <stdint.h>

#define SIZE	100

struct Atleta
{
	char Nombre[20];
	char Pais[20];
	int Medallas;
	
}Atleta[SIZE];

void main(void)
{	
	float mayor=0.0, menor=9999999;
	uint8_t i = 0, pmay = 0, pmen = 0;
	uint8_t n = 0;
	
	printf("Ingresar la cantidad de atletas: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{	
		fflush(stdin);
		printf("\n%d. Digite el nombre: ",i+1);
		gets(Atleta[i].Nombre);
		
		printf("Digite el pais: ");
		gets(&Atleta[i].Pais);
		
		printf("Digite la cantidad de medallas: ");
		scanf("%d",&Atleta[i].Medallas);
	}
	
	for(i=0;i<n;i++)
	{
		if(Atleta[i].Medallas> mayor)
		{
			mayor = Atleta[i].Medallas;
			pmay = i;
		}
	}
	
	printf("\n%s tiene la mayor cantidad de medallas: %d",Atleta[pmay].Nombre,Atleta[pmay].Medallas);
	
}
