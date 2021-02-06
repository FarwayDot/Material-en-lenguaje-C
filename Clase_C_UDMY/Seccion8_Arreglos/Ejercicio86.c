#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void Par_Impar(int *ptr);

void main (void)
{
	int num = 1001;
	
	Par_Impar(&num);
	
}

void Par_Impar(int *ptr)
{
		
	if((*ptr%2)==0)
	{
		printf("\nEl numero es par");
		
	}
	else
	{
		printf("\nEl numero es impar");
	}

}
