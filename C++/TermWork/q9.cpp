#include<iostream>
using namespace std;
class A
{
public:
    void add(int a,int b,int c)
    {
        cout<<"sum is : "<<a+b+c<<endl;
    }
};
class B:public A
{
public:
    void add(int a,int b,int c)
    {
        cout<<"sum is : "<<a+b+c<<endl;
    }
};

int main()
{
    A obj1;
    B obj2;

    obj1.add(1,1,1);
    obj2.add(2,2,2);

    return 0;
}