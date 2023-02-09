#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d",&age);

    if(age>18)
    {
        printf("Adult\n");
        printf("Eligible for vote\n");
    }
    else if(age>13 && age<18)
    {
        printf("Teenager\n");
    }
    else
    {
        printf("Not Eligible!\n");
    }

    printf("Thank you");
return 0;
}