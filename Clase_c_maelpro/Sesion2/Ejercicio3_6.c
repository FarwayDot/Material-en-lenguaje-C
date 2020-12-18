/*Librerías*/
#include <stdio.h>
#include <stdint.h>

/*Declaración de funciones*/
int8_t  inverso_aditivo (int8_t x);  
int32_t resultado_lsb(int32_t y);
int8_t  extract(int8_t num, int8_t pos);

void print_Bin_I32(int32_t num);

/*Variables locales y macros*/

/*Funcion main*/
int main(){
	
	int8_t num1=-75,res1=0;
	int32_t num2=321,res2=0;
	int8_t num3=123,res3=0;
	
	res1=inverso_aditivo(num1);
	printf("Inverso aditivo es: %d \n",res1);

	res2=resultado_lsb(num2);
	printf("\nNumero: %d \nlsb: %d \n",num2,res2);
	print_Bin_I32(res2);
	
	res3=extract(num3,4);
	printf("\n\nNumero= %d\nExtraido: %d",num3,res3);

	return 0;
}

/*Definicion de funciones*/

int8_t inverso_aditivo (int8_t x){

	x=(~x)+1; //Complemeto a2 de x
	return x;

}

int32_t resultado_lsb(int32_t y){
	
	// Filtrando solo los menos significativos
	return y & 0x000000FF;
}

int8_t  extract(int8_t num, int8_t pos){
	
	//return (num & 1<<3); //Esto devuelve un número con signo
	return !!(num & 1<<3); //Y esto el valor exacto del bit
}

void print_Bin_I32(int32_t num){

	int8_t i;

	/*Imprime el "encabezado"*/
	printf("Binario(32 bits): ");
	/*Imprime los bits, uno por uno*/
	for(i=31;i>=0;i--){
		if(num & (1 << i)){
			putchar('1');
		}else{
			putchar('0');
		}
	}
	/*Salto de línea*/
	printf("\n");
}

