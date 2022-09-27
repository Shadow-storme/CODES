#include<iostream>
using namespace std;
int num=100;
int main()
{
    int sum=500;
    cout<<"Global Value of Sum is:"<<num;
    cout<<"\nLocal Value of Sum is:"<<::num;
    return 0;
}
