#include<iostream>
using namespace std;
//program to swap the private data of both classes
class c2;
class c1{
    int val1;
    friend void exchange(c1 &, c2 &);

    public:
    void indata(int a){
        val1 = a;
    }
    void display(){
        cout<<val1<<endl;
    }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);

    public:
    void indata(int a){
        val2 = a;
    }
    void display(){
        cout<<val2<<endl;
    }

};

void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c1 ob1;
    c2 ob2;
    ob1.indata(35);
    ob2.indata(40);
    exchange(ob1, ob2);
    cout<<"The value after exchanging is:";
    ob1.display();
    cout<<"The value after exchanging is:";
    ob2.display();

    return 0;
}