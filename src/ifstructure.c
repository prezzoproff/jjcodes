// A program that illustrates the use of IF ELSE structure

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("You are a adult");
    }else{
        printf("You are a child");
    }
}