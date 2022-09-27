#include<iostream>
using namespace std;
//Declaration of base class:
class shape
{
	public:
    virtual void calculate()
    {
        cout<<"Area of shape: ";
    }
    virtual ~shape()
    {
        cout<<"Destructor called: ";
    }
};
//Declaration of derived class:

class rectangle:public shape
{
    public:
    int l,b,area;
    void calculate()
    {
        cout<<"Length of rectangle: ";
        cin>>l;
        cout<<"breadth of rectangle: ";
        cin>>b;
        area=l*b;
        cout<<"Area of reactangle: "<<area<<"\n";
    }
	virtual ~rectangle()
    {
        cout<<"Destructor called: ";
    }
};

int main()
{
    shape *s;
    rectangle r;
    s=&r;
    s->calculate();
	return 0;
}
