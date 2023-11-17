// a simple unique code to show th basic structoure of a c progam     - comment

#include <stdio.h>   //preprocessor directives

int main(void)         //main function
{
    int age;             // var declaration
    age = 21;                // var initialization
    char name[] = "john";                  // var declaration and initialization

    printf("enter your name; "); // prompt the user to enter name
    scanf("%s",&name);      // store user input in name var

    printf("enter your age:"); // prompt the user to enter age
    scanf("%d",&age);           // store user input in age var


    printf("my name is %s and i am %d years old",name,age);    //output a well formatted string literal

    return 0;    //successful code excecution
}