//a program that prompts the user to enter their marks and give the grade  
#include <stdio.h>
int main ()

{
    int grade;
    printf("enter your age: ");

    if(grade>=70){
        printf('A');
        scanf("%c", &grade);
    }

    else if(grade>=60){
        printf('B');
        scanf("%c", &grade);

    }
    else if(grade>=50){
        printf('C');
        scanf("%c", &grade);


    }
    else(grade>=40){
        printf('D');
        scanf("%c", &grade);
    }

    return 0;
}