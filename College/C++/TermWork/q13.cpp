//Program in C++ to overload unary operator ++ and -- using operator overloading.
#include<iostream>
using namespace std;

class incredecre
{
    int a,b;
    public:
    void accept()
    {
        cout<<"\nEnter two numbers: ";
        cout<<"\nA :  ";
        cin>>a;
        cout<<"B : ";
        cin>>b;
    }
    void operator--()
    {
        a--;
        b--;
    }
    void operator++()
    {
        a++;
        b++;
    }
    void display()
    {
        cout<<"\nA : "<<a;
        cout<<"\nB : "<<b;
    }
};
int main()
{
    incredecre obj;
    obj.accept();
    --obj;
    cout<<"\n After decreement: ";
    obj.display();
    ++obj;
    ++obj;
    cout<<"\n After increement: ";
    obj.display();
    return 0;
}