// a program that multiplies the given numbers

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int result;

    printf("Enter num 1: ");
    scanf("%d", &num1);

    printf("Enter num 2: ");
    scanf("%d", &num2);

    result = num1*num2;
   
    printf("%d * %d = %d", num1,num2,result);

}