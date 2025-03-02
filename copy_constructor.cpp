#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }

        //when there is no copy constructor is found, the compiler provides its own copy constructor...
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<< "The number for this object is: "<<a<<endl;
        }
};

int main(){
    Number x, y, z(21), z2;
    x.display();
    y.display();
    z.display();
    Number z1(x); //copy constructor invoked
    z1.display();
    z2 = z; // copy constructor not called.
    z2.display();
    Number z3 = z;
    z3.display();

    return 0;
}