#include<iostream>
using namespace std;
class wall
{
    public:
    int length;
    int height;
    Wall(int len,int hei);
    {
        length=len;
        height=hei;
        cout<<"\n Length: "<<len;
        cout<<"Height: "<<hei;
    }
    int calculateArea()
    {
        return length*height;
    }
};
int main()
{
    Wall wall1(11,23);
    Wall wall2(34,56);
    cout<<"\nArea of wall 1: "<<wall1.calculateArea();
    cout<<"\nArea of wall 2: "<<wall2.calculateArea();

}