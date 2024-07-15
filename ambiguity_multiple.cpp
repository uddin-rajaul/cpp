#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"How are you..doesn't matter... fuck you"<<endl;
        }
};
class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
        Base1 :: greet();
        }
};

class B{
    public:
    void say(){
        cout<<"Hello world.."<<endl;
    }
};
class D : public B{
    int a;
    //D's new say() method will override base class's say() method
    public:
        void say(){
            cout<<"doest matter, fuck yu"<<endl;
        }
};

int main(){
    //Ambiguity -> 1
    // Base1 base1_obj;
    // Base2 base2_obj;
    // base1_obj.greet();
    // base2_obj.greet();
    // Derived d;
    // d.greet();
    
    //Ambiguity -> 2

    B b;
    b.say();
    D d;
    d.say();

    return 0;
}