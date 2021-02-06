#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main ()
{
	char *p_Cadena;
	char *p_Nombre;
	
	p_Cadena = malloc(10*sizeof(char));
	
	strcpy(p_Cadena,"Jean Franco");
	
	printf("Nombre: %s", p_Cadena);
	
	//Ampliando la cadena de caracteres a 30 espacios
	p_Nombre = realloc(p_Cadena, 30*sizeof(char));
	
	//Agregar despues de lo que ya agregue, o sea "Jean Franco **Algo que añadimos*** "
	strcat(p_Nombre, " o tal vez no");
	printf("\nNombre Completo: %s", p_Nombre);
	
	free(p_Nombre);
		
}
