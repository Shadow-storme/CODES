 #include<iostream>
using namespace std;
class student  
{
public:
  char stu_name[50];
  int roll_num;
  char course_name[50];
  int ph_no;
    void get_details()  
{
    cout<<"\n   Student Details   ";
    cout<<"\n********************";
    cout<<"\n Enter Student Name: ";
    cin>>stu_name;
    cout<<"\n Enter Roll number: ";
    cin>>roll_num;
    cout<<"\n Enter Course Name: ";
    cin>>course_name;
    cout<<"\n Enter Phone Name: ";
    cin>>ph_no; 
}
    void display() 
{
    cout<<"\n********************";
    cout<<"\n Student name is: "<<stu_name;
    cout<<"\n Roll number is: "<<roll_num;
    cout<<"\n Course name is: "<<course_name;
    cout<<"\n Phone number is: "<<ph_no; 
} 
};
int main()  
{        
          student s1;
          s1.get_details();
          s1.display(); 
return 0; 
}