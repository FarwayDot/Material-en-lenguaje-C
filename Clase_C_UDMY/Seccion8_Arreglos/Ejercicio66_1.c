#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define SIZE 50

void Suma_Matriz(int A[SIZE][SIZE], int B[SIZE][SIZE],int f, int c);
void Matrix(int A[SIZE][SIZE],int f,int c);

void main(void)
{
	int M1[SIZE][SIZE];
	int M2[SIZE][SIZE];
	
	int  f = 0, c = 0;
	uint8_t i = 0, j = 0;
	
	printf("Digite el numero de filas: ");
	scanf("%i",&f);
	printf("Digite el numero de columnas: ");
	scanf("%i",&c);
	//Para M1
	for(i = 0; i < f; i++)
	{
		for(j = 0; j < c; j++)
		{	
			printf("Elemento M1[%d][%d]: ",i+1,j+1);
			scanf("%d",&M1[i][j]);
		}
	}
	
	Matrix(M1,f,c);	
	
	//Para M2
	for(i = 0; i < f; i++)
	{
		for(j = 0; j < c; j++)
		{	
			printf("Elemento M2[%d][%d]: ",i+1,j+1);
			scanf("%d",&M2[i][j]);
		}
	}
	
	Matrix(M2,f,c);
	
	Suma_Matriz(M1,M2,f,c);
	
}

void Matrix(int A[SIZE][SIZE],int f,int c)
{	
	static uint8_t n = 1;
	uint8_t i = 0, j = 0;
	
	for(i = 0; i < f; i++)
	{
		for(j = 0; j < c; j++)
		{	
			printf("M%u[%d][%d]: %d ",n,i+1,j+1,A[i][j]);
		}
		printf("\n");
	}
	
	n++;
}

void Suma_Matriz(int A[SIZE][SIZE], int B[SIZE][SIZE],int f, int c)
{
	uint8_t i = 0, j = 0;
	int C[f][c];	
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	printf("\n");
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("[%d][%d]: %d ",i+1,j+1,C[i][j]);
		}
		printf("\n");
	}
	
}
