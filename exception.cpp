#include<iostream>
using namespace std;

int main(){
    try{
        throw 'r';
    }
    catch(int excep){
        cout<<"caught"<<excep<<endl;
    }
    catch(...){
        cout<<"Default exception \n";
    }
    return 0;
}