#include<iostream>
using namespace std;
class studentdetails
{
    public:
    char name[20];
    int rollno;
    int id;
    int semester;
    void get_details()
    {
        cout<<"\n********Student details********\n";
        cout<<"\nEnter student name: ";
        cin>>name;
        cout<<"Enter Student Roll no.: ";
        cin>>rollno;
        cout<<"Enter Student ID: ";
        cin>>id;
        cout<<"Enter Semester: ";
        cin>>semester;
    }
};
class studentmarks:public studentdetails
{
    public:
    int e;
    int h;
    int m;
    int s;
    int ep;
    int hp;
    int mp;
    int sp;
        void get_marks()
    {
        cout<<"\n********Student Marks********\n";
        cout<<"\nEnter English marks: ";
        cin>>e;
        cout<<"Enter Hindi marks: ";
        cin>>h;
        cout<<"Enter Maths marks: ";
        cin>>m;
        cout<<"Enter Science marks: ";
        cin>>s;
    }
    void get_practicalmarks()
    {
        cout<<"\n********Student Practical Marks********\n";
        cout<<"\nEnter English marks: ";
        cin>>ep;
        cout<<"Enter Hindi marks: ";
        cin>>hp;
        cout<<"Enter Maths marks: ";
        cin>>mp;
        cout<<"Enter Science marks: ";
        cin>>sp;
    }

};
class studentfinalresult:public studentmarks
{
    protected:
    int f;
    public:
    void get_finalresult()
    {
        f=e+h+m+s;
        cout<<"\n********Student Final Marks********\n";
        cout<<"Total marks of student are: ";
        cin>>f;
    }
};
int main()
{
    studentfinalresult b1;
    b1.get_details();
    b1.get_practicalmarks();
    b1.get_finalresult();
    return 0;
}