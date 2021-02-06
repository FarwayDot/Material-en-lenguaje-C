#include <stdio.h>
#include <stdint.h>

/*
Las enumeraciones se utilizan para tener 
un codigo más legible y fácil de entender
*/

/*
Pueden tener un nombre, pero no es necesario
si se quieren dejar así
*/

/*
Los valores son asignados automáticamente, comienzan en 0
y aumentan de 1 en 1. Si un valor es asignado con anterioridad,
empieza aumentar desde ese valor
*/

enum{

    Lunes =0,
    Martes ,
    Miercoles = 5,
    Jueves
}mes_t;

enum mis_datos
{
    pepe = 33,
    juan
};

enum mis_datos x,y;

int main()
{
    x = pepe;
    y = juan;

    printf("x = %d\n",x);
    printf("y = %d\n\n",y);

    printf("Martes = %d\n",Martes);
    printf("Jueves = %d\n",Jueves);

    return 0;
}