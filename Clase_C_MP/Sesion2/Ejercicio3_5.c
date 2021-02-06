#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

bool par_impar(uint16_t a);
bool a_mayorb_menor_c(uint32_t a,uint32_t b,uint32_t c);

uint16_t n=16;

void main(){
	
	
	bool resultado;
	uint32_t a=8,b=2,c=2;
	
	
	resultado=par_impar(n);
	
	printf("\n¿El numero es par? [Si]=1, [No]=0 : %d",resultado);	

	resultado=a_mayorb_menor_c(a,b,c);
	
	printf("\na mayor que b y b menor igual que c : Rpta. %d",resultado);
	
}


bool par_impar(uint16_t a){
	
	return (n%2==0);
		
}

bool a_mayorb_menor_c(uint32_t a,uint32_t b,uint32_t c){
	
	return (a>b && b<=c);
	
}
