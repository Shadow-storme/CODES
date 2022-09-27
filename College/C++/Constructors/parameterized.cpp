#include<iostream>
using namespace std;

class test
{
    public:
        int a,b;
        test(int x,int y)
        {
            a=x;
            b=y;
        }
        void show()
        {
            cout<<a<<"  "<<b;
        }
};
int main()
{
    test obj(10,30);
    obj.show();
    return 0;
}