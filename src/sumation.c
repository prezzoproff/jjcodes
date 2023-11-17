// program that prompts the user to enter two numbers and gets their sum 

#include <stdio.h>

int main ()

{
    int num1;
    int num2;
    int sum;
    
    printf("enter num1: ");
    scanf("%d",&num1);

    printf("enter num2: ");
    scanf("%d",&num2);
    
    sum = num1+num2;

    printf("%d+%d=%d",num1,num2,sum);
}



