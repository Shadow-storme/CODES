#include<stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter value of a: ");
    scanf("%d",&a);

    printf("Enter value of b: ");
    scanf("%d",&b);

    int sum;
    sum=a+b;

    printf("\nThe sum is %d",sum);
    //OR(we don't need to make third variable for this).
    printf("\nSum is %d",a+b);

    return 0;
}