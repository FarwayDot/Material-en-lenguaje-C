/* Librerías */
#include <stdio.h>
#include <stdint.h>
#include <math.h>

/* Declaración de funciones */
int16_t valor_absoluto(int16_t x);
int32_t numero_mayor(int32_t x,int32_t y);
int32_t restriccion(int32_t x);

/* Funcion principal */
int main(){
	
	int16_t num1=-518,res1=0;
	int32_t num2_1=220,num2_2=220,res2=0;
	int32_t num3=20,res3=0;
	
	res1=valor_absoluto(num1);
	printf("\nValor Absoluto:\nNum 1:%d\nRes 1:%d",num1,res1);
	
	res2=numero_mayor(num2_1,num2_2);
	printf("\n\nNumero Mayor:\nNum 2.1:%d\tNum 2.2:%d\nRes 2:%d",num2_1,num2_2,res2);
	
	res3=restriccion(num3);
	printf("\n\nNumero 3:%d\nRes 3:%d",num3,res3);
	
	return 0;
	
}

/* Definción de funciones */

int16_t valor_absoluto(int16_t x){
	
	return fabs(x);
}

int32_t numero_mayor(int32_t x,int32_t y){
	
	int32_t sal=0;
	if (x>=y){
		sal=x;		
	}
	else{
		sal=y;
	}
	return sal;
}

int32_t restriccion(int32_t x){
	
	int32_t lim_inf=30,lim_sup=50,sal=0;
	if(x>=lim_sup){
		sal=lim_sup;
	}
	else if(x<=lim_inf){
		sal=lim_inf;
	}
	else{
		sal=x;
	}
	return sal;
}
