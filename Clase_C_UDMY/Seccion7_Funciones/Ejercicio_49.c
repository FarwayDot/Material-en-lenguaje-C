
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

void Menu();
void Conversion();
float Celsius_Fahrenheit(float c);
float Celsius_Kelvin(float c);


void main()
{
    Menu();
    Conversion();
}

void Menu()
{
    printf("Formulas para conversion: ");

    printf("\n\nCelsius -> Fahrenheit:\n\nF = (9*C)+ 32");
    printf("\n     ---");
    printf("\n      5");

    printf("\n\nCelsius -> Kelvin:\n\nK = C + 273.15");
}

void Conversion()
{
    int p = 0, f = 0;
    float Resultado = 0;
    float C = 0,F = 0,K = 0;

    while(f != 1)
    {
        printf("\n\nIngresar la temperatura en grados Celsius: ");
        scanf("%f",&C);

        printf("\nEscoger tipo de conversion: Faherenhei[0] Kelvin[1]: ");
        scanf("%d",&p);

        switch(p)
        {
            case 0: F = Celsius_Fahrenheit(C);
                printf("\nFahrenheit: %.2f",F);
                break;
            case 1: K= Celsius_Kelvin(C);
                printf("\nKelvin: %.2f",K);
                break;
            default: printf("\nConversion Incorrecta");
        }
        printf("\nPara continuar, ingresar [0]:  ");
        scanf("%d",&f);
    }
}

float Celsius_Fahrenheit(float c)
{
    return (((9*c)/5) + 32);

}

float Celsius_Kelvin(float c)
{
    return (c + 273.15);
}
