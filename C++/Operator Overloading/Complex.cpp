#include<iostream>
using namespace std;

class complex
{
    int num1,num2;
    public:
    void accept()
    {
        cout<<"\nEnter two complex numbers: ";
        cout<<"\nA : ";
        cin>>num1;
        cout<<"B : ";
        cin>>num2;
    }
    complex operator+(complex obj)
    {
        complex c;
        c.num1=num1+obj.num1;
        c.num2=num2+obj.num2;
        return(c);
    }
    void display()
    {
        cout<<num1<<"+"<<num2<<"i"<<"\n";
    }
    #include<iosttream>
    using namespace std;
    class complex
    {
        int num1,num2;
        public:
        void accept()
        {
            cout<<"Enter the two complex numbers: ";
            cout<<"\nA: ";
            cin>>num1;
            cout<<"B: ";
            cin>>num2;
        }
    }

};
int main()
{
    complex c1,c2,sum;

    c1.accept();
    c2.accept();

    sum=c1+c2;

    cout<<"\nEntered values: \n";
    cout<<'\t';
    c1.display();
    cout<<'\t';
    c2.display();
    cout<<"Addition of real and imaginary numbers: \n";
    cout<<"\t";
    sum.display();
    return 0;   
}