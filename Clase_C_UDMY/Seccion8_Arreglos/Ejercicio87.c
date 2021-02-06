#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char letra;
	char *p_letra = &letra;
	
	for(letra = 'A'; letra <= 'Z'; letra++)
	{
		printf(" %c",*p_letra);
	}
}
