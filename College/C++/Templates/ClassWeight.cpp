#include<iostream>
using namespace std;
template<typename T>
class weight
{
private:
T kg;
public:
void getData(T x)
{
kg=x;
}
T setData()
{
return kg;
}
};
int main()
{
weight<int>obj1;
obj1.getData(51);
cout<<"Value is :"<<obj1.setData()<<endl;
weight<double>obj2;
obj2.getData(51.2345);
cout<<"The value is :"<<obj2.setData()<<endl;
return 0;
}