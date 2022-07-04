#include<iostream>
using namespace std;
class studentdetails
{
    public:
    char name[40];
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
    void get_percentage()
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
        cout<<"\n********Student Final Marks********\n"<<f=e+h+m+s;
        cout<<"Total marks of student are: ";
        cin>>f;
        cout<<"\nTotal percentage of students are: ";
    }
};
int main()
{
    studentfinalresult b1;
    b1.get_details();
    b1.get_percentage();
    b1.get_finalresult();
   Student per[100];
   int n, i;
   cout<<"\nPlease enter the number of Employees (Max. 100): ";
   cin>>n;
   for(i=0; i< n; i++)
    {
      per[i].get_percentage();
   }
    return 0;
}