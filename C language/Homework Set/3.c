//write a program to print the average of three numbers.
/*#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Average of three numbers is %d",(a+b+c)/3);
    return 0;
}*/
//wap to check if given character is digit or not.
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("%d",ch>='0' && ch<='9');
    return 0;
}
//wap to print the smallest number.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("Smallest number is %d",a);
    }
    else if(b<a && b<c)
    {
        printf("Smallest number is %d",b);
    }
    else
    {
        printf("Smallest number is %d",c);
    }
    return 0;
}