/*Ejercicio 4.3 Arreglos*/

/*Inclusi�n de librer�as*/
#include <stdio.h>
#include <stdint.h>

/*Constantes y macros*/
#define SIZE	10


/*Variables Globales*/
uint16_t Buffer[]={};

/*Declaraci�n de funcioens*/
uint16_t Numero_Mayor(uint16_t a[]);

/*Funci�n principal*/
void main(){
	
	uint8_t num=0; 
	uint16_t buff=0;
	
	/*Ejercicio 4*/
	
	puts("Ingresar numeros: ");
	
	for(num=0;num<SIZE;num++){
		
		printf("Numero %d :",num+1);
		scanf("%d",&Buffer[num]);
		
	}
	
	buff = Numero_Mayor(Buffer);
	printf("N�mero Mayor: %d",buff);
	
	/*Ejercicio 5*/
	
}

/*Definici�n de funciones*/
uint16_t Numero_Mayor(uint16_t a[]){
	
	uint8_t num=0;
	uint16_t max=0;
	
	for(num=0;num<SIZE;num++){
		
		if(a[num]>=max){
			max=a[num];
		}
		
	}
	
	return max;
	
}
