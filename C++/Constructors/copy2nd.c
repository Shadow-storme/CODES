#include<iostream>
using namespace std;
class point
{
    public:
    int x,y;
    point(int x1,int y1);
    {
        x=x1;
        y=y1;
    }
    point(const point&p1);
    {
        x=p1.x;
        y=p1.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
    return y;
    }
    int main()
    {
        point p1(10111,10456);
        point  p2=p1;
        cout<<"p1.x"<<p1.getx()<<"p1,y"<<p1.gety();
        cout<<"p1.y"<<p2.getx()<<"p2,.y"<<p2.gety();
    }