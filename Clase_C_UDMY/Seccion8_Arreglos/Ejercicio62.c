#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define N_ESTUDIANTES	5


void main(void)
{
	uint8_t Sexo[N_ESTUDIANTES];
	uint8_t Hombres = 0;
	uint8_t Mujeres = 0;
	uint8_t i=0;
	
	for(i = 0; i<N_ESTUDIANTES ; i++)
	{
		do
		{
			
			printf("Sexo %d: ",i);
			scanf(" %c",&Sexo[i]);
			
		}while(Sexo[i] != 'H' && Sexo[i] != 'h' && Sexo[i] != 'M' && Sexo[i] != 'm');
		
		if((Sexo[i] == 'H' || Sexo[i] == 'h'))Hombres++;
		if((Sexo[i] == 'M' || Sexo[i] == 'm'))Mujeres++;
			
	}
		
	printf("\n# Hombres = %d",Hombres);
	printf("\n# Mujeres = %d",Mujeres);
}

