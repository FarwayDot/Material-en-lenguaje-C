#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{   
    uint16_t ADC = 600;

    uint16_t Valor_T = 0;
    uint8_t Valor_i = 0;
    uint16_t Valor_f = 0;
    float Valor_tf = 0;

    
    for(ADC = 0; ADC < 1023 ;ADC++)
    {
        Valor_T = (ADC * 3300)/1023; 
        Valor_i= (uint8_t)(Valor_T/1000);
        Valor_f = (uint16_t)(Valor_T % 1000);

        Valor_tf = (ADC * 3.3)/1023;
        
        printf("Numero i: %u.%u\n",Valor_i,Valor_f);
        printf("Numero f: %f\n",Valor_tf);
    }

    return 0;
}