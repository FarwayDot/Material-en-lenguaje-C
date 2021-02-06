#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void Seleccion(int a[]);

void main()
{	

	int Numeros[100];

	uint8_t i = 0;
	
	for(i=0;i<100;i++)
	{
		Numeros[i] = i;
		printf("%d, ",Numeros[i]);
	}
	
	printf("\n\n");
	
	Seleccion(Numeros);
}

void Seleccion(int a[])
{
	int Par[100];
	int Impar[100];
	int Resultado = 0;
	
	int f = 0;
	int p = 0;
	int i = 0;
	
	for(f=0;f<100;f++)
	{	
		Resultado = (a[f])%2;
	
		if(Resultado == 0) //Es par
		{
			Par[p] = a[f];
			p++;	
		}
		
		if(Resultado == 1) //Es impar
		{
			Impar[i] = a[f];
			i++;
		}
	}
	
	//Impresion en consola
	
	//Par
	for(f=0; f<p;f++)
	{
		printf("%d, ",Par[f]);	
	}	
	
	printf("\n\n");
	
	
	//Impar
	for(f = 0; f<i;f++)
	{
		printf("%d, ",Impar[f]);	
	}	
}
