#include<iostream>
using namespace std;
class a
{
    protected:
    int a;
    public:
    void get_a()
    {
        std::cout<<"Enter the  value of a: "<<std::endl;
        cin>>a;
    }
};
class b:public a
{
    protected:
    int b;
    public:
    void get_b()
    {
        std::cout<<"Enter the value of b: "<<std::endl;
        cin>>b;
    }
};
class c
{
    protected:
    int c;
    public:
    void get_c()
    {
        std::cout<<"enter the value of c: "<<std::endl;
        cin>>c;
    }
};
class d:public b,public c
{
    protected:
    int d;
    public:
    void get_calculator()
    {
        get_a();
        get_b();
        get_c();
    }
    void mul()
    {,
        std::cout<<"Multiplication of a,b,c: "<<a*b*c<<std::endl;
    }
    void add()
    {
        std::cout<<"Addition of a,b,c: "<<a+b+c<<std::endl;
    }
        void sub()
    {
        std::cout<<"Substraction of a,b,c: "<<a-b-c<<std::endl;
    }
        void div()
    {
        std::cout<<"Divsion of a,b,c: "<<a/b/c<<std::endl;
    }
};
int main()
{
    d obj;
    obj.get_calculator();
    obj.mul();
    obj.add();
    obj.sub();
    obj.div();
    return 0;
}