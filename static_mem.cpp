#include<iostream>
using namespace std;

class Employee{
    static int count;
    int id;
    public:
        void setdata(void){
            cout<<"Enter employee id: "<<endl;
            cin>>id;
            count++;

        }
        void getdata(void){
            cout<<"The ID of the employee is "<<id<<" and this is employee number "<<count<<endl;
        }
        static void getCount(void){
            //cout<<id; //throws error
            cout<<"The value of count is: "<<count<<endl;
        }
};

int Employee :: count; // default value is 0

int main(){
    Employee emp, emp2, emp3;
    // count is the static data member of class employee

    emp.setdata();
    emp.getdata();
    //Employee ::getCount();

    emp2.setdata();
    emp2.getdata();
    //Employee ::getCount();

    emp3.setdata();
    emp3.getdata();
    Employee ::getCount();

    return 0;
}