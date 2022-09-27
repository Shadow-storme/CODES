#include<iostream>
#include<conio.h>

int main()
{
    int n,i,sum=0;
    cout<<"\nEnter the number: ";
    cin>>n;
    i=1;
    while(i<=5)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum = "<<sum;
    return 0;
}