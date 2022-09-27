#include<iostream>
using namespace std;
int y=90;       //global variable
class test
{
    public:
    static int x;       //static variable
    void singh(int x, int y)    //local variable
    {
        cout<<"Local-> "<<x;
        cout<<"Static->"<<test::x;
        cout<<"Local->"<<y;
        cout<<"Global->"<<::y;
    }

};
int test::x=50;
int main()
{
    test s;
    int x=30;
    int y=40;
    s.singh(x,y);
}