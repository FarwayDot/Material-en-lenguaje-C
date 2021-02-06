#include <stdio.h>
#include <stdint.h>

//Las estructuras son un conjunto de diferentes tipos de datos

//Para declarar una estructura se hace la siguiente forma:

struct Alumno 
{
    char Nombre[20];
    uint8_t Edad;
    float Peso;
};

//Para declarar variables de estructuras, es de la siguiente forma:

struct Alumno Jean = { "Jean Franco", 25, 60.5};
struct Alumno Dante;
struct Alumno Anthony = {"Franck Anthony", 22, 60.2};

//Funciones con estructuras, la primera copiando totalmente la estructura, la segunda con punteros

void Imprimir_Datos(struct Alumno alum);
void Imprimir_Datos_2(struct Alumno *alum);

int main()
{   
    
    printf("Nombre: %s",Jean.Nombre);
    printf("\nEdad: %d",Jean.Edad);
    printf("\nPeso: %.2f",Jean.Peso);

    printf("\n\n***************");

    Imprimir_Datos(Anthony);

    printf("\n\n***************");

    Imprimir_Datos_2(&Anthony);

    return 0;
}

void Imprimir_Datos(struct Alumno alum)
{
    
    printf("\nNombre: %s",alum.Nombre);
    printf("\nEdad: %d",alum.Edad);
    printf("\nPeso: %.2f",alum.Peso);

}


void Imprimir_Datos_2(struct Alumno *alum)
{   
    //Primera Forma

    /*
    printf("\nNombre: %s",(*alum).Nombre);
    printf("\nEdad: %d",(*alum).Edad);
    printf("\nPeso: %.2f",(*alum).Peso);
    */

   //Segunda Forma (Recomendada)

    printf("\nNombre: %s",alum->Nombre);
    printf("\nEdad: %d",alum->Edad);
    printf("\nPeso: %.2f",alum->Peso);
}