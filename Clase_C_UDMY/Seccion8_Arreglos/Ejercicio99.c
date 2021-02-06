#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main ()
{
	int *p1;
	int i = 0;
	
	// 5 elementos int
	p1 = calloc(5, sizeof(int)); 
	
	for(i=0; i<5; i++)
	{	
		printf("Digite un numero: ");
		scanf("%d", &p1[i]);
	}
	
	printf("\n\n");
	
	for(i=0; i<5; i++)
	{	
		printf("%d, ",p1[i]);
		
	}
		
}
