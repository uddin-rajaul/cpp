#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setdata(int a){
            this->a = a;
            return *this;
        }

        void getdata(){
            cout<<"The value of a is: "<<a<<endl;
        }
};

int main(){
    A a;
    a.setdata(52).getdata();
    a.getdata();
    return 0;
}