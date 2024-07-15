#include<iostream>
using namespace std;

int main(){
    int marks[] = {5, 6, 58, 34};
    int l = sizeof(marks)/sizeof(marks[0]);
    int* p = marks;
    for(int i = 0; i<l; i++){
        cout<<"the value of marks[i] : "<<*(p+i)<<endl;
    }

    return 0;
}