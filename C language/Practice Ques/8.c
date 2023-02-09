#include<stdio.h>
#include<conio.h>
int main()
{
    //if it is sunday and it is snowing;
    int is_sunday=1;
    int is_snowing=1;

    printf("%d\n", is_sunday && is_snowing);
    //if it is monday or it is raining;
    int is_monday=0;
    int is_raining=1;
    printf("%d\n", is_sunday || is_snowing);
    //if no is greater than 9 and less than 100:
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    printf("%d",x>9 && x<100);
return 0;
}