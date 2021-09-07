#include"fun.h"


int factorial()
{
    int index,fact=1,num;
 
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
 
    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        return 1;
    }               
 
    for(index=1;index<=num;index++)
    fact=fact*index;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}