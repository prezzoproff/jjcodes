// A program that prompts 5 users to enter their names 
//and marks and uses two functions 1. grader 2. commenter to issue grades and comments


#include <stdio.h>

int grader(int marks);
int commenter(char grade);

int main(){
    int counter = 0;
    int marks;
    int name[50];

    while (counter < 5){
        printf("Enter your name: ");
        scanf("%s", &name);
        printf("Enter your marks: ");
        scanf("%d", &marks);
        char grade = grader(marks);
        printf("Name: %s\nMarks: %d\nGrade: %c\n", name, marks, grade);
        commenter(grade);
        printf("\n");
        printf("\n");
        counter++;
    }

}

int commenter(char grade)
{
    if (grade == 'A')
    {
        printf("Excellent");
    }else if (grade == 'B')
    {
        printf("Very good");
    }else if (grade == 'C')
    {
        printf("Good Trial");
    }else
    {
        printf("Rudi kwenu ukalale bana");
    }
       
}

int grader(int marks)
{
    char grade='A';

    if(marks>=70){
        grade='A';
    }
    else if(marks>=50){
        grade='B';
    }
    else if(marks>=40){
        grade='C';
    }else
    {
        grade='F';
    }
    return grade;

}