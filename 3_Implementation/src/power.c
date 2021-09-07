#include"fun.h"



void power()
{
    double num1,num2, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&num1);
    printf("power : ");
    scanf("%lf",&num2);
 
    p=pow(num1,num2);
 
    printf("\n%lf to the power %lf = %lf \n",num1,num2,p);
}