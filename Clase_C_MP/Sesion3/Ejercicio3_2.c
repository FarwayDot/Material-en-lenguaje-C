/*Inclusion de librerias*/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*Constantes y macros*/
#define INFERIOR	-48
#define SUPERIOR	10
#define NUMERO		-49


/*Declaracion de funciones*/
int Signo_function(int8_t x);
void Range_test(int16_t x);
int8_t Range_inf_sup(int8_t x, int8_t y, int8_t z);

/*Funcion principal*/
int main(){
	
	int8_t num1=-8,sal1=0;
	int16_t num2=5;
	int8_t num3=0;
	
	sal1=Signo_function(num1);
	printf("\nFuncion Signo\nInput:%d\tOutput:%d",num1,sal1);
	
	printf("\n\nRestringir numero");
	Range_test(num2);
		
	num3=Range_inf_sup(NUMERO,INFERIOR,SUPERIOR);
	printf("\nRpta: %d",num3);
		
	return 0;
}

/*Definicion de funciones*/

int Signo_function(int8_t x){
	
	int salida=0;
	
	if(x>0){
		salida=1;
	}
	else if(x<0){
		salida=-1;
	}
	else{
		salida=0;
	}
	
	return salida;
}

void Range_test(int16_t x){
	
	switch(x){
		
		case 0:printf("\nCero");break;
		case 1:printf("\nUno");break;
		case 2:printf("\nDos");break;
		case 3:printf("\nTres");break;
		case 4:printf("\nCuatro");break;
		case 5:printf("\nCinco");break;
		case 6:printf("\nSeis");break;
		case 7:printf("\nSiete");break;
		case 8:printf("\nOcho");break;
		case 9:printf("\nNueve");break;
	}
	
	if(x<0 || x>9){
		
		printf("\nFuera de rango");
	}

}

int8_t Range_inf_sup(int8_t x, int8_t y, int8_t z){
	
	int salida=0;
	
	if(x<y){
		salida=y;
	}
	else if(x>z){
		salida=z;
	}
	else{
		salida=x;
	}
	return salida;
}
