#include<iostream>
using namespace std;
class Employee
{
   char emp_name[30];
   int emp_number;
   float basic, da, it, gross_salary, net_salary;
   public:
   void read_emp_details()
   {
	 cout<<"\n\n*** Enter Employee Details ***";
	 cout<<"\nEmployee Number: ";
	 cin>>emp_number;
	 cout<<"Employee Name: ";
	 cin>>emp_name;
	 cout<<"Basic Salary: ";
	 cin>>basic;
	 cout<<"\n---- Employee Details are saved ----\n\n";
   }
   float find_net_salary()
   {
      da = basic * 0.52;
      gross_salary = basic + da;
      it = gross_salary * 0.30;
      net_salary = (basic + da) - it;
      return net_salary;
   }
   void display_emp_details()
   {
      cout<<"\n\n*** Employee Details ***\n";
      cout<<"\nEmployee Number	: "<<emp_number;
      cout<<"\nEmployee Name	: "<<emp_name;
      cout<<"\nNet Salary: "<<net_salary;
      cout<<"\n--------------------------\n";
   }
};
int main()
{
   Employee emp[100];
   int n, i;
   cout<<"\nPlease enter the number of Employees (Max. 100): ";
   cin>>n;
   for(i=0; i< n; i++)
    {
      emp[i].read_emp_details();
   }
   for(i=0; i < n; i++)
    {
      emp[i].find_net_salary();
   }
   for(i=0; i < n; i++)
    {
      emp[i].display_emp_details();
   }
   return 0;
}
