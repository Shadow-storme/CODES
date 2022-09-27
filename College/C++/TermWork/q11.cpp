//Program in C++ to put the typist details using single inheritance.
#include<iostream>
using namespace std;
class staff
{
    protected:
    char name[20];
    char address[30];
    char code[20];

};
class typest:public staff
{
    public:
    int hsp;
    int esp;
    void put_details()
    {
        cout<<"\n********Typest details********\n";
        cout<<"\nEnter Name: "<<endl;
        cin>>name;
        cout<<"Enter address: "<<endl;
        cin>>address;
        cout<<"Enter code: "<<endl;
        cin>>code;
        cout<<"Enter Hindispeed: "<<endl;
        cin>>hsp;
        cout<<"Enter Englishspeed: "<<endl;
        cin>>esp;
    }
    void get_details()
    {
        cout<<"\n***********Single Inheritance**********\n";
        cout<<"\nName: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Hindispeed: "<<hsp<<endl;
        cout<<"Englishspeed: "<<esp<<endl;
    }
};
int main()
{
    typest obj;
    obj.put_details();
    obj.get_details();
    return 0;
}