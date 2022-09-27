//Palindrome Number
#include<iostream>
using namespace std;
class A
{
    public:
    int n,c,r,sum;
    void putdata(int n)
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
    obj.putdata(121);
    return 0;
}