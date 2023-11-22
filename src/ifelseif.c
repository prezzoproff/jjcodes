// program that prompts the user to enter marks and tells the grade he/she is having 

#include <stdio.h>
int main ()

{
    int grade =7;
    printf("enter your grade: ");
    scanf("%d", &grade);

    if(grade>=70)
    {
        printf("you have grade A ");
    }

   else if(grade>=60)
    {
        printf("you have grade B ");
    }
    else if(grade>=50)
    {
        printf("you have grade C");
    }
   else if(grade>=40)
   {
    printf("you have grade D");
    
   }
   else
   {
    printf("you have failed terribly kasia rudi ukasome na uache ujinga ");
   }
}