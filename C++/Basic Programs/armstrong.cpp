#include<iostream>
using namespace std;
class A 
{
    int n,c,r,arm;
    public:
    void getdata()
    {
        cout<<"Enter the number: ";
        cin>>n;
    }
    void putdata()
    {
        arm=0;
        c=n;
        while(n>0)
        {
            r=n%10;
            arm=(r*r*r)+arm;
            n=n/10;
        }
        if(c==arm)

            cout<<"The number is Armstrong Number";
            else
            cout<<"The number is not an Armstrong Number";
    }
};
int main()
{
    A obj;
    obj.getdata();
    obj.putdata();
return 0;
}