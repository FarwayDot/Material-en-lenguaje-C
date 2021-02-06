/*Inclusión de librerías*/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*Declaración de funciones*/
void Tabla_Multiplicar(uint8_t num1);
void Tabla_Multiplicar_Primeros_N(uint8_t num2);
void Print_Int8(int8_t num3);

/*Función principal*/
void main()
{
	uint8_t num1=10;
	uint8_t num2=6;
	int8_t num3=85;
	
	Tabla_Multiplicar(num1);
	Tabla_Multiplicar_Primeros_N(num2);
	Print_Int8(num3);
	
	return ;
}

/*Definición de funciones*/
void Tabla_Multiplicar(uint8_t num1)
{	
	uint8_t i=0;
	
	for(i=1;i<=12;i++ )
	{
		printf("\n%d * %d = %d",i,num1,i*num1);
	}
}

void Tabla_Multiplicar_Primeros_N(uint8_t num2)
{
	uint8_t i=0;
	
	printf("\n");
	
	for(i=1;i<=num2;i++)
	{
		printf("\n%d * %d = %d",i,num2,i*num2);
	}
}

void Print_Int8(int8_t num3)
{
	int8_t i=0;
	
	printf("\n");
	
	for(i=7;i>=0;i--)
	{
		if(num3 & 1<<i)
		{
			putchar('1');
		}
		else
		{
			putchar('0');	
		}
	}
	
	printf("\n");
	
}
