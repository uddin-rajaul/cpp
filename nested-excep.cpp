#include<iostream>
using namespace std;

int main(){
    try{
        try{
            throw 20;
        }
        catch(int n){
            cout<<"Handled partially: "<<n<<endl;
            throw;
        }
    }
    catch(int n){
        cout<<"Handled remaining: "<<n<<endl;
    }
    return 0;
}