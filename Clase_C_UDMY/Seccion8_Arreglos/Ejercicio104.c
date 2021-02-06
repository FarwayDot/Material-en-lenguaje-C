//getchar()
//
//Se utiliza para leer caracter a caracter.
//Esta función devuelve el caracter siguiente del flujo de entrada stdin
//En caso de error o de encontrar el fin del archivo, devuelve EOF.
//
//putchar()
//
//Se utiliza para escribir en la salida, stdout, caracter a caracter.

#include <stdio.h>

void main()
{
	int c = 0;
	int n = 0;
	
	//Mientras 'c' no llegue al final
	while(EOF != (c=getchar()))
	{
		switch(c)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': n++;
		}
	}
	
	printf("La frase tiene: %d",n);
	
}

