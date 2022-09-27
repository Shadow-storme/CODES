#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void get_a()
    {
        cout<<"Enter the value for a: ";
        cin>>a;
    }
    friend void big(A B);
};
class B
{
    public:
    int b;
    void get_b()
    {
        cout<<"Enter the value for b: ";
        cin>>b;
    }
};
void big(A a1,B b1)
{
    if(a1.a>b1.b)
    cout<<"**a is greater**";
        else if(b1.b>a1.a)
        {
        cout<<"**b is greater**";
        }
        else
        {
        cout<<"Both are equal";
        }
    }
int main()
{
    A c1;
    B c2;
    c1.get_a();
    c2.get_b();
    big(c1,c2);
return 0;
}