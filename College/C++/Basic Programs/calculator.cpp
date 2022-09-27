#include<iostream>
using namespace std;
class A
{
    int a,b,c,ch;           //ch(choice)
    public:
    void calculator()
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        cout<<"\nEnter your choice to perform specific task: ";
        cin>>ch;
        if(ch==1)
        {
            c=a+b;
            cout<<"\nAddition: "<<c;
        }
        if(ch==2)
        {
            c=a-b;
            cout<<"\nSubtraction: "<<c;
        }
        if(ch==3)
        {
            c=a*b;
            cout<<"\nMultiplication: "<<c;
        }
        if(ch==4)
        {
            c=a/b;
            cout<<"\nDivision: "<<c;
        }
        if(ch>4)
        {
            cout<<"\n!!Invalid output!!";
        }
    }
};
int main()
{
    A obj;
    obj.calculator();
return 0;
}