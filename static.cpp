#include<iostream>
using namespace std;

int stat(int a, int c){
    static int l = 0;
    l = l +1;
    return a*c + l;
}

int main(){
    int a, c;
    cout<<"enter a and c: ";
    cin>>a>>c;
    cout<<"After calculation: "<<stat(a,c)<<endl;
    cout<<"After calculation: "<<stat(a,c)<<endl;
    cout<<"After calculation: "<<stat(a,c)<<endl;


    return 0;
}