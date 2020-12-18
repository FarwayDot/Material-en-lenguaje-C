/*Ejercicio 4.3 Arreglos*/

/*Inclusión de librerías*/
#include <stdio.h>
#include <stdint.h>

/*Constantes y macros*/
#define SIZE	10


/*Variables Globales*/
uint16_t Buffer[]={};

/*Declaración de funcioens*/
uint16_t Numero_Mayor(uint16_t a[]);

/*Función principal*/
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
	printf("Número Mayor: %d",buff);
	
	/*Ejercicio 5*/
	
}

/*Definición de funciones*/
uint16_t Numero_Mayor(uint16_t a[]){
	
	uint8_t num=0;
	uint16_t max=0;
	
	for(num=0;num<SIZE;num++){
		
		if(Buffer[num]>=max){
			max=Buffer[num];
		}
		
	}
	
	return max;
	
}
