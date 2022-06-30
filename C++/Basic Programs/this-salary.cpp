#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string name;
        int id;
        int salary;
    public:
        void set_name(string name)
        {
            this->name = name;
        }
        void set_id(int id)
        {
            this->id = id;
        }
        void set_salary(int salary)
        {
            this->salary = salary;
        }
        string get_name()
        {
            return name;
        }
        int get_id()
        {
            return id;
        }
        int get_salary()
        {
            return salary;
        }
};

int main(){
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    Employee e[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the name of employee "<<i+1<<": ";
        string name;
        cin>>name;
        e[i].set_name(name);
        cout<<"Enter the id of employee "<<i+1<<": ";
        int id;
        cin>>id;
        e[i].set_id(id);
        cout<<"Enter the salary of employee "<<i+1<<": ";
        int salary;
        cin>>salary;
        e[i].set_salary(salary);
    }
    cout<<"\n\n";
    for(int i=0; i<n; i++){
        cout<<"Employee "<<i+1<<"\n";
        cout<<"Name: "<<e[i].get_name()<<"\n";
        cout<<"Id: "<<e[i].get_id()<<"\n";
        cout<<"Salary: "<<e[i].get_salary()<<"\n";
        cout<<"\n\n";
    }
    return 0;
}
