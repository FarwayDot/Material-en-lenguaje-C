#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define SIZE 2

void Suma_Matriz(int A[SIZE][SIZE], int B[SIZE][SIZE]);

void main(void)
{
	int M1[SIZE][SIZE] = {{1,2},
					{2,1}};
	int M2[SIZE][SIZE] = {{2,1},
					{1,2}};
					
	Suma_Matriz(M1,M2);
	
}

void Suma_Matriz(int A[SIZE][SIZE], int B[SIZE][SIZE])
{
	uint8_t i = 0, j = 0;
	int C[SIZE][SIZE];	
	
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf("\n[%d][%d]: %d",i,j,C[i][j]);
		}
	}
	
}
