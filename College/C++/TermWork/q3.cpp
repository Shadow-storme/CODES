//Program in C++ to print the sum and cube of numbers using inline function.
#include<iostream>
using namespace std;
class calc
{  public:
    inline int sum(int num1,int num2)
    { return num1+num2; }
    inline int cube (int num1)
    { return num1*num1*num1. } 
};
int main()
{  int num1, num2;
    calc demo;
    cin>>num1;
    cin>>num2;
    int x=demo.sum(num1,num2);
    cout<<"Sum is:\n"<<x;
    int y=demo.cube(num1);
    cout<<"\nCube is:\n"<<y;  }