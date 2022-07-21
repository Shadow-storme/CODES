#include<iostream>
using namespace std;

class complex
{
    public:
    int num1,num2;

    void accept()
    {
        cout<<"eneter values of two cmelxe cimeber"
        cin>>num1>>num2;
    }
    complex operator+(complex obj)
    {
        complex c;
        c.num1=num1+obj.num1;
        c.num2=num2+obj.num2;
    }
    void display()
    {
        cout<<num1<<"+"<<num2<<"i"<<"\n";
    }
};

int main()
{
    complex c1,c2;
    
}

