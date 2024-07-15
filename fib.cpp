#include<iostream>
using namespace std;

int fib(int num){
    if (num<2){
        return 1;
    }
    else
        return fib(num-2)+ fib(num-1);
}
int main(){
    int num;
    cout<<"Enter nth term: ";
    cin>>num;
    for (size_t i = 0; i < num; i++)
    {
        cout<<fib(i)<<" ";
    }
    
    
    return 0;
}