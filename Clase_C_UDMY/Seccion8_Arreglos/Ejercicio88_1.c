#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void Par_Impar(int *ptr);

void main(void)
{
	int Vector[10];
	int *p_V = &Vector;
	int i = 0;

	for(i=0; i<10; i++)
	{	
		printf("%d. Ingrasar valor: ",i+1);
		scanf("%d",&Vector[i]);
	}
	
	for(i=0; i<10; i++)
	{
		Par_Impar(p_V);
		p_V++;
			
	}
}

void Par_Impar(int *ptr)
{	
	if((*ptr%2)==0)
	{
		printf("\nEl numero %d es par",*ptr);
		
	}
	else
	{
		printf("\nEl numero %d es impar",*ptr);
	}
}
