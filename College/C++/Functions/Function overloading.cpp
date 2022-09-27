#include<iostream>
using namespace std;

class Shape
{
    public:
    void Volume(int h,double r)
    {
        cout<<"Value of Cylinder is: "<<3.14*r*r*h;
    }
    void Volume(int r)
    {
        cout<<"\nThe value of Cube is: "<<r*r*r;
    }
    void Volume(int l,int b,int h)
    {
        cout<<"\nvalue of x and y is: "<<l*b*h;
    }
}
int main()
{
    Shape obj1;
    obj1.Volume(4,6);
    obj1.Volume(8);
    obj1.Volume(4,6,8);
}