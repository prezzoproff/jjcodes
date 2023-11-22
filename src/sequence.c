// program that prompts the user tomenter their age and prints that they are an adult or a child 
#include <stdio.h>
int main (){
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    
    if(age>18){
        printf("you are an adult");
    }
    else{
        printf("you are child");
    }

    return 0;


}

