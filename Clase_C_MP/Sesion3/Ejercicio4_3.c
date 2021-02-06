/*Inclusión de librerías*/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*Declaración de funciones*/
void Factorial_Numero(uint16_t num1);
void Primo_Verificacion(uint8_t num2);

/*Función principal*/
void main()
{
	uint16_t num1=5;
	uint8_t num2=4;
	
	Factorial_Numero(num1);
	Primo_Verificacion(num2);
		
	return 0;
}

/*Definición de funciones*/
void Factorial_Numero(uint16_t num1)
{	
	uint16_t i=1;
	uint16_t fact=1;

	do
	{
		fact *= i;
		i++;
	}while(i<=num1);
	
	printf("Factorial (%d): %d",num1,fact);
	
}

void Primo_Verificacion(uint8_t num2)
{	
	uint8_t cont=2;
	uint8_t p=0;
	
	switch(num2)
	{
		case 2:
		case 3: 	printf("\nEs un numero primo"); break;
		default:	while((p!=1) && (num2!=cont))
					{	
						p = (num2%cont)==0;
						cont++;
					}
					
					if((p==0)|| (num2==cont))
					{
						printf("\nEs primo");	
					}
					else
					{
						printf("\nNo es primo");
					}
					break;
	}
}
