#include<iostream>
using namespace std;

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n*factorial(n-1);
    
}
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is: "<<factorial(num);

    return 0;
}