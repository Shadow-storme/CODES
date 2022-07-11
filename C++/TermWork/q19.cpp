#include<iostream>
using namespace std;

int main()
{
    int numerator, denominator, result;
    cout<<"Enter numerator and denominator:"<<endl;
    cin>>numerator>>denominator;
    try
    {
        if(denominator==0)
        {
            throw denominator;
        }
        result = numerator/denominator;
    }
    catch(int ex)
    {
        cout<<"Exception: Divide by zero not allowed-- "<<ex;
    }
    cout<<"Division is:"<<result;
    return 0;
}