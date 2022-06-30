//Reverse the number
#include<iostream>
using namespace std;
class A
{
    int n,r;
    public:
    void input()
    {
        cout<<"Enter the value: ";
        cin>>n;
    }
    void output()
    {
        while(n>0)
        {
            r=n%10;
            cout<<r;
            n=n/10;
        }
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
return 0;
}