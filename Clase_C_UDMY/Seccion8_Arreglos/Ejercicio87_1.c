#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void Verificar_Primo(int *ptr);

void main(void)
{
	int num = 3;
	int i = 0;
	
	for(i=2; i<50; i++)
	{
		Verificar_Primo(&i);	
	}
	
}

void Verificar_Primo(int *ptr)
{
	int i = 0;
	
	for(i=2; i<=*ptr; i++)
	{	
		if(*ptr==i)
		{
			printf("\nEl numero %d es primo", *ptr);
		}
		else if((*ptr%i)==0)
		{
			printf("\nEl numero %d no es primo",*ptr);
			break;
		}
		
			
	}
	
}
