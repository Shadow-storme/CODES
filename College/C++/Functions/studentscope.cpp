#include<iostream>
using namespace std;
class stu
{
public:
    char name[20],add[20];
    int roll;
    int phn;
    stu();
    void read();
    void disp();
};
stu::stu()
{
    cout<<"\n***Student details***";
}
void stu::read()
{
    cout<<"\nEnter Student name::";
    cin>>name;
    cout<<"\nEnter Roll no.::";
    cin>>roll;
    cout<<"\nEnter Phone no.::";
    cin>>phn;
}
void stu::disp()
{
    cout<<"\n*****The Student details are***** \n";
    cout<<"\nStudent Name is::"<<name;
    cout<<"\nStudent Roll no.is::"<<roll;
    cout<<"\nStudent Phone no.is::"<<phn;
}
int main()
{stu s;
s.read();
s.disp();
return 0;
}
