#include"fun.h"



void division()
{
    int num1, num2, div=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &num1); 
    printf("Please enter second number : "); 
    scanf("%d", &num2);
    div=num1/num2;
    printf("\nDivision of entered numbers=%d\n",div);
}