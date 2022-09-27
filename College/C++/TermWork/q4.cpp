//Program in C++ to access global variables using the scope resolution operator
#include<iostream>
using namespace std;
int num=100;
int main()
{
    int sum=500;
    cout<<"Global Value of Sum is:"<<sum;
    cout<<"\nLocal Value of Sum is:"<<::num;
    return 0;
}