#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void Menu(void);
void Tabla();
void Suma();
void Resta();
void Multiplicacion();
void Division();

void main()
{
    uint8_t p=1;

    Menu();

    while(p==1)
    {
        Tabla();
        printf("\n�Desea otra operacion? \nSi [1] \nNo[0]\n");
        scanf("%d",&p);
    }

}


void Menu(void)
{
	printf("*****Tabla de Operaciones*****");
	printf("\n1. Suma");
	printf("\n2. Resta");
	printf("\n3. Multiplicacion");
	printf("\n4. Division");
}

void Tabla()
{
    uint8_t Op = 0;

	printf("\nIntroduzca una operacion: ");
	scanf("%d",&Op);

	switch(Op)
	{
		case 1: Suma();
				break;
		case 2: Resta();
				break;
		case 3: Multiplicacion();
				break;
		case 4: Division();
                break;
		default: printf("Operacion Invalida");

	}

}

void Suma()
{
    int a = 0, b = 0;
    printf("Ingresar 2 numeros: ");
    scanf("%d %d",&a,&b);
    printf("Suma: %d",a+b);
}

void Resta()
{
    int a = 0, b = 0;
    printf("Ingresar 2 numeros: ");
    scanf("%i %i",&a,&b);
    printf("Resta: %d",a - b);
}

void Multiplicacion()
{
    int a = 0, b = 0;
    printf("Ingresar 2 numeros: ");
    scanf("%d %d",&a,&b);
    printf("Multiplicacion: %d",a*b);
}

void Division()
{
    float a = 0, b = 0;
    printf("Ingresar 2 numeros con decimal: ");
    scanf("%f %f",&a,&b);
    printf("\nDivision: %.3f",a/b);
}
