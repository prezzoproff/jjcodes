#include <stdio.h>

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