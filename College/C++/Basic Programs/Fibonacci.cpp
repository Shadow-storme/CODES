//Fibonacci Number
#include<iostream>
using namespace std;
class A 
{
    int n,c,a,b;
    public:
    void fib()
    {
        a=0;
        b=1;
        cout<<"Enter the number of terms: ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cout<<a<<ends;
            c=a+b;
            a=b;
            b=c;
        }
    }
};
int main()
{
    A obj;
    obj.fib();
return 0;
}