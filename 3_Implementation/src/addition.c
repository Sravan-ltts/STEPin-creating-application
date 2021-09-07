#include"fun.h"
 
void addition()
{
    int num1, num2, sum = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &num1); 
    printf("Please enter second number : "); 
    scanf("%d", &num2); 
    sum = num1 + num2; 
    printf("\n%d + %d = %d\n", num1, num2, sum); 
}