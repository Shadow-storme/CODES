#include<iostream>
using namespace std;
class classB;
class classA 
{
    public:
    int numA;
    classA() : numA(16){}

    friend int add(classA,classB);
};
class classB
{
    public:
    int numB;
    classB() : numB(36){}

    friend int add(classA, classB);
};

int add(classA objA,classB objB)
{
    return(objA.numA + objB.numB);
}
int main()
{
    classA objA;
    classB objB;
    cout<<"Sum: "<<add(objA,objB);
return 0;
}