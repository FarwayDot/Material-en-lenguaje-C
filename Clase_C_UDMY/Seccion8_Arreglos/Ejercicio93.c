#include <stdio.h>
#include <stdint.h>
#include <string.h>

void main(void)
{
	char Nombre[20];
	char *p_Nombre;
	int longitud = 0;
	
	//Ejercicio 93
	/*
	
	//Asignamos un nombre a Nombre
	strcpy(Nombre,"Jean Franco");
	//Longitud de la cadena
	longitud = strlen(Nombre);
	//Asignamos al puntero un espacio de memoria necesario
	//longitud + 1 porque -> Jean Franco\0 Esto lo tienen todos los strings
	//que indican el final de esta.
	p_Nombre = (int) malloc((longitud)*sizeof(char));
	//Copiamos el contenido de Nombre al puntero p_Nombre
	strcpy(p_Nombre,Nombre);
	//Imprimimos el mensaje para verificar el correcto copiado
	printf("Puntero: %s",p_Nombre);
	
	*/
	
	//Ejercicio 93.1
	
	//Asignamos un nombre a Nombre
	printf("Ingresar un nombre: ");
	gets(Nombre);
	//Longitud de la cadena
	longitud = strlen(Nombre);
	//Asignamos al puntero un espacio de memoria necesario
	//longitud + 1 porque -> Jean Franco\0 Esto lo tienen todos los strings
	//que indican el final de esta.
	p_Nombre = (int) malloc((longitud+1)*sizeof(char));
	//Copiamos el contenido de Nombre al puntero p_Nombre
	strcpy(p_Nombre,Nombre);
	//Imprimimos el mensaje para verificar el correcto copiado
	printf("Puntero: %s",p_Nombre);
	
}
