#include<iostream>
using namespace std;
class prime
{
    public:
    int n,count;    //data member
    void input()
    {
        cout<<"Enter any number: ";
        cin>>n;
    }
    void output()
    {
        count=0;
        for(int i=1;i<=n;i++)
        {
            if(n/i==0)
            {
                count++;  //count =1
            }
        }
        if(count==2)
            cout<<"Prime number";
        else
        cout<<"Not prime number";
    }
};
int main()
{
    prime obj;
    obj.input();
    obj.output();
    return 0;
}