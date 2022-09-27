#include<iostream>
using namespace std;
class dest
{
    public:
    int x,y;
    dest(int x1,int y1)
    {
    cout<<"Inside Constructor: ";
    x=x1;
    y=y1;    
    }
    void display()
    {
    cout<<"\nx: "<<x;
    cout<<"\ny: "<<y;   
    }
    ~dest()
    {
    cout<<"\nInside Destructor: ";
    }
};
int main()
{
    dest obj1(20, 30);
    obj1.display();
    return 0;
}