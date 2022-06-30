#include<iostream>
using namespace std;

class level
{
    public:

    //fucntion call with 1 int parameter
    void func(int x)
    {
        cout<<"Value of x is: "<<x;
    }
    //fucntion call with same name with 1 double parameter
    void func(double x)
    {
        cout<<"\nThe value of x is: "<<x;
    }
    //function with same name but 2 int parameters
    void func(int x,int y)
    {
        cout<<"\nvalue of x and y is: "<<x<<","<<y;
    }
};
int main()
{
    level obj1;
    obj1.func(4);
    obj1.func(89.89);
    obj1.func(45,67);
}