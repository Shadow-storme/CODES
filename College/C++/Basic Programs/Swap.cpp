//Swapping of numbers
#include<iostream>
using namespace std;
class swap 
{
    int num1,num2,temp;
    public:
    void getdata()
    {
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
    }
    void putdata()
    {
        cout<<"Before Swapping:"<<endl;
        cout<<"num1="<<num1<<ends<<"num2="<<num2<<endl;
        temp=num1;
        num1=num2;
        num2=temp;
        cout<<"After Swapping:"<<endl;
        cout<<"num1="<<num1<<ends<<"num2="<<num2<<endl;
    }
};
int main()
{
    swap obj;
    obj.getdata();
    obj.putdata();
return 0;
}