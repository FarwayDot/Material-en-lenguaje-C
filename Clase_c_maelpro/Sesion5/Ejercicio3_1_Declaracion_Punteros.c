/*Ejercicio 3.1 Declaracion y definicion de punteros*/

/*Inclusión de librerías*/
#include <stdio.h>
#include <stdint.h>

/*Macros y constantes*/

/*Declaración de funciones*/
void Intercambiar_Variables(uint32_t *ptr1, uint32_t *ptr2);

void Variables_PWM(uint32_t amplitud, uint32_t duty_cycle, uint32_t frecuencia,
					uint32_t *Voltaje_Promedio, uint32_t *Tiempo_Alto, uint32_t *Periodo);

/*Función principal*/
void main(){
	
	uint32_t x=8;
	uint32_t y=12;
	
	uint32_t Amplitud=20;		//Voltios
	uint32_t Duty_Cycle=25; 	//%
	uint32_t Frecuencia=10000;	//Hz
	
	uint32_t Voltaje_Promedio;
	uint32_t Tiempo_Alto;
	uint32_t Periodo;
	
	uint16_t a=15;
	uint16_t *pt=&a;
	
	/*Ejercicio 01*/
					
	/*Para hacer un cambio sobre los mismos valores*/
	printf("\nEjercicio 1");
	printf("\nx = %d y y = %d",x,y); 	//Impresión de los valores antes del cambio
	Intercambiar_Variables(&x,&y);		//El puntero apunta en la dirección de x e y
	printf("\nx = %d y y = %d",x,y);	//Impresión de los valores luego del cambio
	
	/*Ejercicio 02*/
	
	/**/
	printf("\n\nEjercicio 2");
	Variables_PWM(Amplitud, Duty_Cycle, Frecuencia,
					&Voltaje_Promedio,&Tiempo_Alto,&Periodo);
	printf("\nVoltaje Promedio = %d V\nTiempo Alto = %d us\nPeriodo = %d us",Voltaje_Promedio,Tiempo_Alto,Periodo);	
	
	/*Ejercicio 03*/
	
	printf("\n\n %d",pt[0]);
	//Si es el valor de 'a' entonces es little

}


/*Definición de funciones*/
void Intercambiar_Variables(uint32_t *ptr1, uint32_t *ptr2){
	
	uint32_t buffer=0;
	
	buffer = *ptr1; // buffer toma el valor al que apunta ptr1
	*ptr1 = *ptr2;	// el valor a donde apunta ptr1 le guardamos a lo que apunta ptr2
	*ptr2 = buffer; // a donde apunta ptr2 le colocamos buffer
	
}

void Variables_PWM(uint32_t amplitud, uint32_t duty_cycle, uint32_t frecuencia,
					uint32_t *Voltaje_Promedio, uint32_t *Tiempo_Alto, uint32_t *Periodo)
{

	/*Periodo*/
	*Periodo = 1000000/frecuencia; //En us
	
	/*Voltaje Promedio*/
	*Voltaje_Promedio = (amplitud*duty_cycle)/100; //Voltaje
	
	/*Tiempo en Alto*/
	*Tiempo_Alto = (*Periodo)*(duty_cycle)/100;	//En s
	
}
