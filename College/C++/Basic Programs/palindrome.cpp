#include<iostream>
using namespace std;
class A
{
    int n,c,r,sum;
    public:
    void getdata()
    {
        cout<<"Enter the number: ";
        cin>>n;
    }
    void putdata()
    {
        sum=0;
        c=n;
        while(n>0)
        {
            r=n%10;
            sum=(sum*10)+r;
            n=n/10;
        }
        if(c==sum)
        cout<<"\nPalindrome Number";
        else
        cout<<"\nNOT Palindrome Number";
    }
};
int main()
{
    A obj;
    obj.getdata();
    obj.putdata();
    return 0;
}