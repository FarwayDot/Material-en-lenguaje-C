#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint8_t Even_Odd_Detect(uint8_t num);

void main()
{
    uint8_t num1 = 0;
    uint8_t Flag = 0;
	
	printf("Digite un numero : ");
	scanf("%d",&num1);
	
    Flag = Even_Odd_Detect(num1);

    if(Flag == 1)
    {
        printf("\nEl numero es Par\n");
    }
    else if(Flag == 0)
    {
        printf("\nEl numero es Impar\n");
    }
    else
    {
        printf("\nNo detectado");
    }

    system("pause");

    return ;
}


uint8_t Even_Odd_Detect(uint8_t num)
{
    uint8_t f = 0;

    num = num % 2;

    if(num == 0)
    {
        f = 1;
    }
    else
    {
        f = 0;
    }

    return f;

}
