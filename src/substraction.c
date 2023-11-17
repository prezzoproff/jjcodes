// A program that prompts the user to enter two numbers and finds their difference

#include <stdio.h> 

int main()
{
    int num1;
    int num2;
    
    printf("Enter firstNumber:");
    scanf("%d", &num1);

    printf("Enter SecondNumber: ");
    scanf("%d", &num2);

    int result = num1 - num2;
    
    printf("%d - %d = %d", num1, num2,result);

}