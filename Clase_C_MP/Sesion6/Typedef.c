#include <stdio.h>
#include <stdint.h>

/*

EL identificador typedef es una forma de cambiar
el nombre a otros identificadores de tipo int, char,
entre otros.

typedef int entero -> Esto hace el int x -> entero x

Se pueden crear valores de tipo "int", pero con otro nombre
llamado "entero"

*/

typedef int entero;

typedef int Arreglo_10[10]; //Se crea un tipo de arreglo de 10 elementos

int main()
{
    Arreglo_10 a,b,c,d,e; //5 arreglos de 10 elementos cada uno
    entero x = 15;

    printf("x = %d",x);

    return 0;
}