/*Ejercicio  4.6 Arreglos Multidimensionales*/

/*Inclusi�n de librer�as*/
#include <stdio.h>
#include <stdint.h>

/*Constantes y macros*/

/*Declaraci�n de funciones*/
double Seno(uint8_t angulo);

/*Funci�n principal*/
void main(){
	
	uint8_t angulo_sexag=40;
	
	printf("El seno de %d es igual a %.3f",angulo_sexag,Seno(angulo_sexag));
	
	return;
}

/*Definici�n de funciones*/
double Seno(uint8_t angulo)
{		
	uint8_t index=0;

	double Tabla_sen[]={	/*Angulo*/
						0		//0
						,0.173	//10
						,0.342	//20
						,0.5	//30
						,0.642	//40
						,0.766	//50
						,0.866	//60	
						,0.939	//70
						,0.984	//80
						,1		//90
						};	
								
	if(angulo >=0 & angulo<=90)
	{
		index = angulo/10;		
	}
	else
	{
		index=0;
	}	

	return (Tabla_sen[index]);				
}
