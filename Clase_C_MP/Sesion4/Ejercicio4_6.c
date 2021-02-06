/*Inclusión de librerías*/

#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

/*Variables y constantes*/

#define Fila    3
#define Columna 4

uint8_t M_N[Fila][Columna]={ {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}};

/*Declaración de funciones*/
double Seno_Angulo(uint8_t alfa);
uint8_t Display_7_Segmentos(uint8_t num);
void Imprimir_Matriz(void);

/*Función principal*/
void main()
{

    uint8_t angulo = 95;
    uint8_t numero = 5;

    uint8_t i=0,j=0; //Para los bucles for
    uint8_t valor=2;

    printf("Seno(%d) : %.3f",angulo,Seno_Angulo(angulo));

    printf("\nNumero %d : 0x%x\n",numero,Display_7_Segmentos(numero));

    Imprimir_Matriz();

}

/*Definición de funciones*/
double Seno_Angulo(uint8_t alfa)
{
    double Ang_Seno[]={ 0,
                        0.173,
                        0.342,
                        0.500,
                        0.642,
                        0.766,
                        0.866,
                        0.939,
                        0.984,
                        1.000
                        };

    return Ang_Seno[(uint8_t) alfa/10];
}

uint8_t Display_7_Segmentos(uint8_t num)
{

    uint8_t Salida=0;
    uint8_t TablaDeco[10] = {   //abcdefgP
                                0b11111100,  //0
                                0b01100000,  //1
                                0b11011010,  //2
                                0b11110010,  //3
                                0b01100110,  //4
                                0b10110110,  //5
                                0b10111110,  //6
                                0b11100000,  //7
                                0b11111110,  //8
                                0b11100110,  //9
                            };
    if(num>=0 & num<=9)
    {
        Salida = TablaDeco[num];
    }
    else
    {
        Salida = 0;
    }


    return Salida;

}

void Imprimir_Matriz(void)
{
    uint8_t i=0,j=0;

    for(i=0; i<Fila; i++)
    {
       for(j=0; j<Columna; j++)
       {
           printf("%d\t",M_N[i][j]);

       }
       printf("\n");
    }
}
