#include<iostream>
using namespace std;
class shape
    {
    public:
        virtual void calculate()
        {
        }
    };

class rectangle:public shape
    {
    public:
        void calculate()
        {
            float area,l,b;
            cout<<"For finding the area of rectangle : "<<endl;
            cout<<"Enter length "<<endl;
            cin>>l;
            cout<<"Enter breadth "<<endl;
            cin>>b;
            area=l*b;
            cout<<"Area of Rectangle is : "<<area<<"\n\n";
        }
};

class square:public shape
    {
    public:
        void calculate()
        {
            float area,a;
            cout<<"For finding the area of square : "<<endl;
            cout<<"Enter side"<<endl;
            cin>>a;
            area=a*a;
            cout<<"Area of Square is : "<<area<<"\n\n";
        }
};

class circle:public shape
    {
    public:
        void calculate()
        {
            float area,r;
            cout<<"For finding the area of circle : "<<endl;
            cout<<"Enter radius "<<endl;
            cin>>r;
            area=2*3.14*r*r;
            cout<<"Area of Rectangle is : "<<area<<"\n\n";
        }
};

int main()
{   shape s;
    shape *obj1;
    obj1=&s;
    obj1->calculate();

    rectangle r;
    rectangle *obj2;
    obj2=&r;
    obj2->calculate();

    square sq;
    square *obj3;
    obj3=&sq;
    obj3->calculate();

    circle c;
    circle *obj4;
    obj4=&c;
    obj4->calculate();



    return 0;
}
