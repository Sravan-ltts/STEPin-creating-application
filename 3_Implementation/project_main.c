#include"fun.h"






int main()
{
    int X=1;
    char Calc_oprn;
 
    // Function call 
    calculator_operations();
 
    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);
 
        Calc_oprn=getchar();
 
        switch(Calc_oprn)
        {
            case '+': addition();
                      break;
 
            case '-': subtraction();
                      break;
 
            case '*': multiplication();
                      break;
 
            case '/': division();
                      break;
 
            case '$': modulus();
                      break;
 
            case '!': factorial();
                      break;
 
            case '^': power();
                      break;
 
            case 'H':
            case 'h': calculator_operations();
                      break;
 
            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;
 
            default : system("cls");
 
    printf("\n   You have entered unavailable option    ");
    printf("\n   Please Enter any one of below available \n");
    printf("options\n");
                      calculator_operations();
        }
    }
}
 
//Function Definitions
 
void calculator_operations()
{
    //system("cls");  use system function to clear 
    //screen instead of clrscr();
    printf("\n             Welcome to C calculator \n\n");
 
    printf(" Press 'Q' or 'q' to quit the program\n\n");
    
    printf(" Press 'H' or 'h' to display below options \n\n");
 
    printf("Enter 'C' or 'c' to clear the screen and display available option \n");
  
 
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter $ symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}