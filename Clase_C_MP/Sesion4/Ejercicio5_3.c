/*Inclusión de librerías*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*Variables y constantes*/

char F1[];
char F2[];
char F3[];
char F4[];

/*Declaración de funciones*/

/*Función Principal*/
int main(void)
{
    uint8_t i=0;

    for(i=0;i<=10;i++)
    {
        F1[i]=getchar();
    }

    printf("\n%d",F1)[2];

}

/*Definición de funciones*/
