#include <stdio.h>
#include <stdint.h>

uint8_t Buffer[20]={20,19,18,17,16,15}; 

void Retornar(uint8_t A[]);
void Retornar_Dir(uint8_t *buffer);

int main()
{

    uint8_t *p = Buffer;

    printf("%d",*p);

    //Retornar(Buffer);
    //Retornar_Dir(Buffer);

    return 0;
}

void Retornar(uint8_t A[])
{   
    uint8_t i = 0;

    for(i=0; i<6; i++)
    {
        printf("Buffer[%d] = %d\n",i,A[i]);
    }
    
}

void Retornar_Dir(uint8_t *buffer)
{   
    uint8_t i = 0;

    for(i=0; i<6; i++)
    {
        printf("Buffer[%d] = %d\n",i,*(buffer+i));
    }
    
}