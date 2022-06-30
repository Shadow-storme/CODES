#include<iostream>
using namespace std;

class test
{
    int n;
    public:
    test()
    {
    n=10;
    cout<<n;
    }
    ~test()
    {
        cout<<"Object destroyed";
        cout<<n;
    }
};
int main()
{
    test ob;
    return 0;
}