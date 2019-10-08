#include <stdio.h>
#include <stdlib.h>

void Tabla();

void main(){
	
	int b=0;

	printf("Ingresar un número: ");
	scanf("%d", &b);

	Tabla(b);

	system("pause");
	return 0;
}

void Tabla(int a){
	
	int m=0;

	for (m=0;m<=12;m++){

		printf("\n%d x % d\n",a,m,a*m);

	}

}