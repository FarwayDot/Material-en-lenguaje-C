#include <stdio.h>s
#include <stdint.h>
#include <stdlib.h>

#define SIZE 8


void main(void)
{
	int A[SIZE] = {5,1,0,3,2,20,10,8};
	int i = 0, pos = 0;
	int aux = 0;
	
	for(i=0; i<SIZE; i++)
	{
		pos = i;
		aux = A[pos];
		
		while((pos>0) && (aux < A[pos-1])) 
		{
			A[pos] = A[pos-1];
			pos--;
		}
		A[pos] = aux;
	}
	
	for(i=0; i<SIZE; i++)
	{
		printf("A[%d] = %d\n",i,A[i]);
	}
	
}
