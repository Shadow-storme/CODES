//Program to find cube of one number (int type, float type) using Function Template.
#include <iostream>
using namespace std;

template <class T>
T cube(T a)
{
    return a * a * a;
}

int main()
{
    int a;
    float b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Cube of " << a << " is " << cube(a) << endl;
    cout << "Enter a number: ";
    cin >> b;
    cout << "Cube of " << b << " is " << cube(b) << endl;
    return 0;
}