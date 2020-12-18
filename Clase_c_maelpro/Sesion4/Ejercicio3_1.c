#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*******************/
/* uint8_t* num1 -> Declara un puntero
 * *num1 = &x -> Se guarda la dirección de x en el puntero num1
 * x = *num1 -> x toma el valor a donde apunta num1
 * *num1 = x -> el valor almacenado hacia donde apunta num1 toa el valor de x
/*******************/

void Intercambio(int32_t* num1, int32_t* num2);
void Operaciones_Datos_PWM(uint32_t Amplitud, uint32_t Frecuencia, uint32_t CicloTrabajo,
						   uint32_t* VoltajePromedio, uint32_t* TiempoAlto, uint32_t* Periodo);

void main()
{
	int32_t num1=10,num2=6;
	
	uint32_t Amp = 10, Frec = 16000, DC = 20;
	uint32_t Vprom, Talto, T; 
	
	printf("%d : %d\n",num1,num2);
	Intercambio(&num1,&num2);
	printf("%d : %d",num1,num2);
	
	Operaciones_Datos_PWM(Amp, Frec, DC, &Vprom, &Talto, &T);
	printf("\n\nAmplitud = %d V\nFrecuencia = %d Hz\nDutyCycle = %d %\nVprom = %d V\nTiempoAlto = %d us\nPeriodo = %d us",Amp,Frec,DC,Vprom,Talto,T);
	
	return ;
}

void Intercambio(int32_t* num1, int32_t* num2)
{
	int32_t x=0;	
	
	x = *num1;
	*num1=*num2;
	*num2=x;
	
}

void Operaciones_Datos_PWM(uint32_t Amplitud, uint32_t Frecuencia, uint32_t CicloTrabajo,
						   uint32_t* VoltajePromedio, uint32_t* TiempoAlto, uint32_t* Periodo)
{
	*VoltajePromedio = Amplitud / 2;
	*Periodo = (1000000)/(Frecuencia);
	*TiempoAlto = (*Periodo)*(CicloTrabajo)/100;
	
}
