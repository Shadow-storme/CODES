#include<iostream>
using namespace std;
class c
{
    public:
    int a,b;
    c(int x,int y)
    {
        a=x;
        b=y;
    }
    c(c &ref)
    {
        a=ref.a;
        b=ref.b;
    }
    void show()
    {
        cout<<a<<" "<<b;
    }
    
};
int main()
{
    c obj(10,20);
    c obj2=obj;
    obj.show();
    obj2.show();
    return 0;
}