#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main(void)
{
	int A[2][2];
	int B[2][2];
	int  f = 0, c = 0;
	uint8_t i = 0, j = 0;
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{	
			printf("Elemento [%u][%u]: ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}

	for (i=0; i<2; i=i+1) /* rad-nr */
    	for (j=0; j<2; j=j+1) /* kolumn-nr */
      		B[i][j] = A[i][j];
    
    printf("\n");
    
	for (i=0; i<2; i=i+1) /* rad-nr */
    	for (j=0; j<2; j=j+1) /* kolumn-nr */
      		printf("Elemento [%u][%u]: %d    ",i+1,j+1,B[i][j]);
}
