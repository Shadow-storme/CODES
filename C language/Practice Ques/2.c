#include<stdio.h>
int main()
{
    float pi=3.14;
    float r;

    printf("Enter radius:");
    scanf("%f",&r);

    printf("Area of circle is:%f",pi*r*r);
    return 0;
}