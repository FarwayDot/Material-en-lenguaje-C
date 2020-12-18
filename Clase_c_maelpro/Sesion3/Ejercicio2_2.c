/*Inclusión de librerías*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*Constantes y macros*/
 

/*Declaración de funciones*/

void Multiplo_5(uint16_t num1); 
void Numero_Par(uint16_t num2);
void Valor_Absoluto(int16_t num3);

/*Función principal*/
void main()
{	
	
	uint16_t num1=35;
	uint16_t num2=11;
	int16_t num3=-69;
	
	Multiplo_5(num1);
	
	Numero_Par(num2);
	
	Valor_Absoluto(num3);
	
	return 0;
	
}


/*Definción de funciones*/

void Multiplo_5(uint16_t num1)
{	
	if( num1 % 5 == 0)
	{
		printf("\nEs múltiplo de 5");	
	}
	else
	{
		printf("\nNo es múltiplo de 5");
	}	
}

void Numero_Par(uint16_t num2)
{
	if( num2 % 2 == 0)
	{
		printf("\nEs par");	
	}
	else
	{
		printf("\nEs impar");
	}
}

void Valor_Absoluto(int16_t num3)
{	

	if( num3>=0){
		
		printf("\nValor Absoluto %d: ", num3);	
	}
	else{
		
		printf("\nValor Absoluto %d ", num3*(-1) );
	}
}
