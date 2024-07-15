#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
} ep;
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};


int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout<<m1;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;


    // ep harry;
    // union money m1;

    // m1.rice = 'C';
    // m1.car = 43;
    // cout<<m1.rice;
    // harry.eID = 1;
    // harry.favChar = 'L';
    // harry.salary = 120909;
    // cout<<"the value is "<<harry.salary<<endl;
    // cout<<"the value is "<<harry.eID<<endl;
    // cout<<"the value is "<<harry.favChar<<endl;

    return 0;
}