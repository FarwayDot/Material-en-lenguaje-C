#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void Cuenta_Vocales(char *ptr);

void main(void)
{
	char Nombre[20];
	
	printf("Digite su nombre: ");
	gets(Nombre);
	
	Cuenta_Vocales(Nombre);
	
}

void Cuenta_Vocales(char *ptr)
{
	int cont = 0;
	int cont_a,cont_e,cont_i,cont_o,cont_u;
	
	while(*ptr)
	{
		switch(*ptr)
		{
			case 'a': cont_a++; break;
			case 'e': cont_e++; break;
			case 'i': cont_i++; break;
			case 'o': cont_o++; break;
			case 'u': cont_u++; break;
			default: break; 
				
		}
		ptr++;
	}
	
	printf("\n a: %d",cont_a);
	printf("\n e: %d",cont_e);
	printf("\n i: %d",cont_i);
	printf("\n o: %d",cont_o);
	printf("\n u: %d",cont_u);
	
}
