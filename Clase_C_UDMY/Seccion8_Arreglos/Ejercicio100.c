#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main()
{
	char *p_Palabra, palabra[50];
	
	printf("Digite una palabra: ");
	gets(palabra);
	
	p_Palabra = calloc(strlen(palabra)+1, sizeof(char));
	
	strcpy(p_Palabra, palabra);
	
	printf("Palabra: %s", p_Palabra);
	
	free(c);
	
}
