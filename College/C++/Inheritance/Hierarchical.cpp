#include <iostream>  
using namespace std;
class calculator                 // Declaration of base class.  
{  
    public:
    int a;
    int b;
    void get_data(int n,int m)  
    {  
        a= n;
        b = m;
    }  
};  
class Addition : public calculator  // inheriting calculator class  
{  
    public:  
    int addition()  
    {  
        int result = a+b;
        return result;
    }  
};  
class Substraction : public calculator    // inheriting Shape class  
{  
    public:
    int substraction()  
    {
        float result = a-b;
        return result;
    }
};
int main()
{
    addition a;
    substraction s;
    int a,b;
    std::cout<< "Enter the value of a and b for addition: " << std::endl;  
    cin>>a>>b;  
    r.get_data(a,b);  
    int m = r.addition();  
    std::cout << "Area of the rectangle is : " <<m<< std::endl;  
    std::cout << "Enter the base and height of the triangle: " << std::endl;  
    cin>>base>>height;  
    t.get_data(base,height);  
    float n = t.triangle_area();  
    std::cout <<"Area of the triangle is : "  << n<<std::endl;  
    return 0;  
}  