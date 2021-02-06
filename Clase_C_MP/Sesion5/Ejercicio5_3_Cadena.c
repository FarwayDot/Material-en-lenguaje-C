#include <stdio.h>
#include <stdint.h>

uint8_t Frase0[] = {1,2,3,4,5};
uint8_t Frase1[] = "Frase 1";
uint8_t Frase2[] = "Frase 2";
uint8_t Frase3[] = "Frase 3";
uint8_t Frase4[] = "Frase 4";

void Imprimir(uint8_t num);

uint8_t *p1 = Frase1;
uint8_t *p2 = Frase2;
uint8_t *p3 = Frase3;
uint8_t *p4 = Frase4;

int main()
{   
    uint8_t n = 0;

    printf("Ingresar un número entre 1 y 4: ");
    scanf("%d",&n);

    Imprimir(n);

    return 0;
}

void Imprimir(uint8_t num)
{   
    uint8_t i = 0;

    switch(num)
    {
        case 1: puts(p1);break;
        case 2: puts(p2);break;
        case 3: puts(p3);break;
        case 4: puts(p4);break;
        default: puts("Numero fuera de rango");
    }

}