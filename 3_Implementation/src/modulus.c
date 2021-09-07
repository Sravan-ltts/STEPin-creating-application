#include"fun.h"



void modulus()
{
    int num1, num2, mod=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%d", &num1); 
    printf("Please enter second number  : "); 
    scanf("%d", &num2);
    mod=num1%num2;
    printf("\nModulus of entered numbers = %d\n",mod);
}