
#include <stdio.h>
#include <stdlib.h>

//Crear un nodo
typedef struct
{
    int dato;
    struct Nodo *sgte;
}Nodo;

Nodo *primer = NULL;
Nodo *ultimo = NULL;

void agregar(Nodo *nodo)
{
    if(primer == NULL)
    {
        primer = nodo;
        ultimo = nodo; 
    }
    else
    {
        ultimo -> sgte = nodo;
        ultimo = nodo;
    }
    
}

void main()
{

}