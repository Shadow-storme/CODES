#include<iostream>
using namespace std;
class prime
{
    public:
        int n,count;
        prime(int x)
        {
            n=x;
            count=1;
            {
                for(int i=2;i<=n/2;i++)
                if(n%i==0)
                {
                    count=0;
                    break;
                }
                else
                {
                    count=1;
                }
            }

        }
        void show()
        {
            if(count==1)
            cout<<n<<"Prime";
            else
            cout<<n<<"Not prime";
        }
};
int main()
{
    int n;
    cout<<"parametrized\n";
    cout<<"\nEnter the number: ";
    cin>>n;
    prime obj(n);
    obj.show();
    return 0;
}