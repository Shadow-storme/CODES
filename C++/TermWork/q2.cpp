@@ -1,19 +0,0 @@
#include <iostream>
using namespace std;
class Parent
{   public:
    static int num1;
    static int num2;
    void func (int num1)
{
cout <<"The value of the static variable num1:"<<Parent::num1;
cout <<"\nThe value of the local variable num1:"<<num1;
} };
int Parent::num1 = 5;
int Parent::num2 = 10;
int main ()
{    Parent b;
     int num1 = 15;
     b.func(num1);
     cout <<"\nParent::num2="<<Parent::num2;
     return 0;   }