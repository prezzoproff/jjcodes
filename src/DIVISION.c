// program that prompts the user to enter two numbers and divides them
#include <stdio.h>

int main()

{

    float num1;
    float num2;
    


    printf("enter num1: ");
    scanf("%f", &num1);

    printf("enter num2: ");
    scanf("%f", &num2);

    float divide=num1/num2;


    printf("%.2f/%.2f=%.5f",num1,num2,divide);
}
