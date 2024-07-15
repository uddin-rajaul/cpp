#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
//call by reference using pointer
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//call by reference using cpp reference variable
int & swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    //call by value
    int a = 5, b = 4;
    //cout<<"sum of 4 and 5 is : "<<sum(4,5);
    cout<<"Value of a: "<<a<<"\t"<<"value of b: "<<b<<endl;
    swapPointer(&a,&b); //this will swap using pointer reference 
    cout<<"Value of a: "<<a<<"\t"<<"value of b: "<<b<<endl;

    swapReferenceVar(a,b) = 789; //this will swap using reference variable

    cout<<"Value of a: "<<a<<"\t"<<"value of b: "<<b<<endl;

    return 0;
}