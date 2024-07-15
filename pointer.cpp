#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int* b = &a;
    //& --> address of operator
    cout<<b<<endl;
    cout<<&a<<endl;

    //* --> (value at) dereference operator
    cout<<*b;
    //pointer to pointer
    int **c = &b;
    cout<<"the address of b: "<<&b<<endl;
    cout<<"the address of b given by c: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;

    cout<<"The value at address c is: "<<**c<<endl;

    return 0;
}