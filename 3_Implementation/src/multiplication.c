#include"fun.h"


void multiplication()
{
    int num1, num2, mul=0; 
    printf("\nPlease enter first numb   : "); 
    scanf("%d", &num1); 
    printf("Please enter second number: "); 
    scanf("%d", &num2);
    mul=num1*num2;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}