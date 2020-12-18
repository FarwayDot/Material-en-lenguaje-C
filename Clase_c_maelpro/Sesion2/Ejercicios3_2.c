#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

uint16_t n=10; //Problema 1
uint32_t resultado_suma_cuadrado=0;//Problema 2

uint16_t suma_serie(void);//Problema 1
uint32_t suma_cuadrado(uint32_t a,uint32_t b);//Problema 2
uint8_t prom(uint8_t a,uint8_t b,uint8_t c);

void main(void){
	
	uint16_t resultado_serie=0; // 1
	uint32_t a=4,b=3; // 2
	unsigned int p=10,q=9,r=3;
	unsigned int promedio=0;
	
	resultado_serie=suma_serie();
	resultado_suma_cuadrado=suma_cuadrado(a,b);
	promedio=prom(p,q,r);
	
	printf("\nEl resultado de la suma es %d",resultado_serie);
	printf("\nSuma de cuadrados %d",resultado_suma_cuadrado);	
	printf("\nPromedio : %d",promedio);

}


uint16_t suma_serie(void){
	
	return (n*(n+1)/2);
	
}

uint32_t suma_cuadrado(uint32_t a,uint32_t b){
	
	return (a*a+b*b);
	
}

uint8_t prom(uint8_t a,uint8_t b,uint8_t c){
	
	return ((a+b+c)/3);	
	
}


