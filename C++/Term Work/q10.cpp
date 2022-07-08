#include<iostream>
#include<conio.h>
using namespace std;
class Area_rectangle
{
  public:
    float area(float l,float b)
    {
        return (l*b);
    }
};

class Perimeter_rectangle
{
  public:
    float peri(float l,float b)
    {
        return 2*(l+b);
    }
};

class Area_square
{
  public:
    float area(float s)
    {
        return (s*s);
    }
};

class Perimeter_square
{
  public:
    float peri(float s)
    {
        return (4*s);
    }
};

class Area_circle
{
  public:
    float area(float r)
    {
        return (3.14*r*r);
    }
};

class Perimeter_circle
{
  public:
    float peri(float r)
    {
        return (2*3.14*r);
    }
};

class Rectangle:private Area_rectangle, private Perimeter_rectangle
{
    private:
        float length, breadth;
    public:
       void get_data()
       {   cout<<"For finding the area and perimeter of rectangle "<<endl;
           cout<<"Enter length: ";
           cin>>length;
           cout<<"Enter breadth: ";
           cin>>breadth;
       }
        float area()
        {
            return Area_rectangle::area(length,breadth);
        }
        float peri()
        {
            return Perimeter_rectangle::peri(length,breadth);
        }

};

class Square:private Area_square, private Perimeter_square
{
    private:
        float side;
    public:
       void get_data( )
       {   cout<<"\n\nFor finding the area and perimeter of square "<<endl;
           cout<<"Enter side : ";
           cin>>side;
       }
        float area()
        {
            return Area_square::area(side);
        }
        float peri()
        {
            return Perimeter_square::peri(side);
        }
};

class Circle:private Area_circle, private Perimeter_circle
{
    private:
        float radius;
    public:
       void get_data( )
       {   cout<<"\n\nFor finding the area and perimeter of circle "<<endl;
           cout<<"Enter radius : ";
           cin>>radius;
       }
        float area()
        {
            return Area_circle::area(radius);
        }
        float peri()
        {
            return Perimeter_circle::peri(radius);
        }
};

int main()
{
    Rectangle r;
    r.get_data();
    cout<<"Area = "<<r.area();
    cout<<"\nPerimeter = "<<r.peri();

    Square s;
    s.get_data();
    cout<<"Area = "<<s.area();
    cout<<"\nPerimeter = "<<s.peri();

    Circle c;
    c.get_data();
    cout<<"Area = "<<c.area();
    cout<<"\nPerimeter = "<<c.peri();

    return 0;
}
