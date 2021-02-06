#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main()
{
	float *p_Numeros, Numeros[50];
	int n = 0, i = 0;
	
	printf("Digite la cantidad de numeros: ");
	scanf("%d",&n);
	
	p_Numeros = calloc(n, sizeof(float));
	
	for(i=0; i<n; i++)
	{	
		printf("Digite un numero: ");
		scanf("%f", &p_Numeros[i]);
	}
	
	printf("\n\n");
	
	for(i=0; i<n; i++)
	{	
		printf("%.2f, ", p_Numeros[i]);
	
	}
	
	
		
	free(p_Numeros);	
	
	printf("\n\n");
	
	for(i=0; i<n; i++)
	{	
		printf("%.2f, ", p_Numeros[i]);
	
	}
	
}
