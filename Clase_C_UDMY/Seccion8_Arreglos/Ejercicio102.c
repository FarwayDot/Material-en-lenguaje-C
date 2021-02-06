#include <stdio.h>

void main()
{
	char cad[] = "ABC";
	
	printf("%c", cad[0]);
	printf("%c", cad[1]);
	printf("%c", cad[2]);
	printf("%c", cad[3]);
	
	printf("\n\n");
	
	printf("%c", *cad);
	printf("%c", *(cad+1));
	printf("%c", *(cad+2));
	printf("%c", *(cad+3));
	
}
