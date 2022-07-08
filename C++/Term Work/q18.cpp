#include<iostream>
using namespace std;

int add(int x,int y)
{
return(x+y);
}
float add(float x,float y)
{
return(x+y);
}
double add(double x,double y)
{
return(x+y);
}
template<typename T>
T add(T x, T y)
    {
         return(x+y);
    }

int main()
{
    cout<<"Addition of 2 integers 3 and 4 is :"<<add<int>(3,4)<<endl;
    cout<<"Addition of 2 float variables 3.4 and 4.2 is :"<<add<float>(3.4,4.2)<<endl;
    cout<<"Addition of 2 double variables 9345.4554 and 5564.8724 is :"<<add<double>(9345.4554,5564.8724)<<endl;
    return 0;

}
