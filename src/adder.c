// program that uses function to find sum of two numbers
#include <stdio.h>

int adder(int a, int b);
int main ()

{
    int summation = adder(7,9);
    printf("%d", summation);
}

int adder(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}