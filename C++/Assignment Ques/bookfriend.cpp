#include<iostream>
using namespace std;
class A
{
private:
    int id,price;
    char name[30],author[30];
public:
    void get()
    {
        cout<<"\n   *****BOOK DETAILS*****   \n";
        cout<<"\nBook Name: ";
        cin>>name;
        cout<<"\nAuthor Name: ";
        cin>>author;
        cout<<"\nBook ID: ";
        cin>>id;
        cout<<"\nBook Price: ";
        cin>>price;
    }
    friend class B;
};
class B
{
public:
    void display(A t)
    {
 cout<<"\n********************************************\n";
        cout<<"\nName of the book is: "<<t.name<<endl;
        cout<<"\nAuthor of the book is: "<<t.author<<endl;
        cout<<"\nId of the book is: "<<t.id<<endl;
        cout<<"\nPrice of the book is: "<<t.price<<endl;
    }
};
int main()
{
    A t;
    B t1;
    t.get();
    t1.display(t);
    return 0;
}
