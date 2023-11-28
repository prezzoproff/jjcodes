// program that prompts the user to enter two numbers and adds them

#include<stdio.h>

int adder(int a, int b){
    int sum=a+b;
    return sum;
}

int main ()
{

    int num1,num2;
    printf("enter num1,num2: ");
    scanf("%d%d",&num1,&num2);

    int sum=adder(num1,num2);

    printf("%d+%d=%d", num1,num2,sum);
}







