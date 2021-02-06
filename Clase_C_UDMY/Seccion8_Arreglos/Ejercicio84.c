#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void main(void)
{
	
	int n = 40;
	int *ptr1 = &n;
	int *ptr2 = &n;
	
	
	
//	
//	printf("Posicion %x",&n);
//	
//	printf("\nPosicion %p",&n);
//	
//	printf("\nPosicion %d",&n);
//	
	
	printf("Posicion %d",*ptr2);

}
