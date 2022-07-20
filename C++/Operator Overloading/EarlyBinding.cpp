// CPP Program to illustrate early binding.
#include<iostream>
using namespace std;
	
class Base
{
public:
	void show() { cout<<" In Base \n"; }
};
	
class Derived: public Base
{
public:
	void show() { cout<<"In Derived \n"; }
};
	
int main(void)
{
	Base *bp = new Derived;

	// The function call decided at
	// compile time (compiler sees type
	// of pointer and calls base class
	// function.
	bp->show();

	return 0;
}
