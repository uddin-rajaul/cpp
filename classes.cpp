#include<iostream>
using namespace std;

class something{
    private:
        int a, b,c;
    public:
        int d,e;
    void setdata(int a1, int b1, int c1);
    void getdata(){
        cout<<"value of a is : "<<a<<endl;
        cout<<"value of b is : "<<b<<endl;
        cout<<"value of c is : "<<c<<endl;
        cout<<"value of d is : "<<d<<endl;
        cout<<"value of e is : "<<e<<endl;

    }
};
void something :: setdata(int a1, int b2, int c3){
    a = a1;
    b = b2;
    c = c3;
}
int main(){
    something s;
    s.d = 99;
    s.e = 85;
    s.setdata(1,32,43);
    s.getdata();
    return 0;
}