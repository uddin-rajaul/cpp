#include<iostream>
using namespace std;

class complex{
    int a; int b;
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;

    }
    void setDatabySum(complex c1, complex c2){
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void printNumber(){
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1, c2, c3;
    c1.setData(1,3);
    c1.printNumber();
    c2.setData(5,6);
    c2.printNumber();

    c3.setDatabySum(c1, c2);
    c3.printNumber();

    return 0;
}