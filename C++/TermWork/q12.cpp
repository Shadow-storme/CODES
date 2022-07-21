//Program to find the total marks and percentage for 5 subjects of 10 students using multilevel inheritance. 
#include<iostream>
using namespace std;

class A
{
    public:
    int math,sci,art,sst,it;
    void get()
    {
        cout<<"ENTER THE MARKS IN MATH:";
            cin>>math;
        cout<<"\nENTER THE MARKS IN SCI:";
            cin>>sci;
        cout<<"\nENTER THE MARKS IN ART:";
            cin>>art;
        cout<<"\nENTER THE MARKS IN SST:";
            cin>>sst;
        cout<<"\nENTER THE MARKS IN IT: ";
            cin>>it;
    }
};

class B:public A
{
public:
    total()
    {
        cout<<"TOTAL MARKS:"<<math+sci+art+sst+it<<endl;
    }
};

class C:public B
{
  public:
      per()
      {
          cout<<"PERCENTAGE:"<<(math+sci+art+sst+it)/250.0*100<<"%";
      }
};

int main()
{
    printf("\n\n\tMARKS=?/50\n\n");

    C obj;
    for(int i=0;i<10;i++)
    {
    cout<<"\n\nFOR "<<i+1<<" STUDENT\n\n";
    obj.get();
    obj.total();
    obj.per();
    }
    return 0;
}