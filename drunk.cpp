#include<iostream>
using namespace std;
class Teacher
{
    int id;
    char sub[20];
public:
    void getinput()
    {
        cout<<"Enter the id and subject: ";
        cin>>id>>sub;

    }

    void output()
    {
        cout<<"The id is: "<<id<<endl<<"The subject is: "<<sub<<endl;


    }


};
class Staff
{
    int ids;
    char pos[20];
public:
    void input()
    {
        cout<<"Enter the id and position of the staff: ";
        cin>>ids>>pos;

    }

     void outsaff()
    {
        cout<<"The id is: "<<ids<<endl<<"The position is: "<<pos<<endl;


    }

};
class Coordinator: public Teacher, public Staff
{

    char dept[20];
public:
    void getdept()
    {
        cout<<"Enter the department: " ;
        cin>>dept;
    }
    void outdept()
    {
        cout<<"The department is: "<<dept<<endl;
    }
};
int main()
{
Coordinator c1, c2;
c1.getinput();
c1.input();
c1.getdept();
c2.output();
c2.outsaff();
c2.outdept();
}