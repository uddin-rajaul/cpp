#include<iostream>
using namespace std;

struct currency
{
    int rs;
    int paisa;
};

int main(){
    currency c1,c2, sum;
    float rem;
    cout<<"Enter 1st currency:";
    cin>>c1.rs>>c1.paisa;
    cout<<"Enter 2nd currency: ";
    cin>>c2.rs>>c2.paisa;
    cout<<"Sum of currency is : ";
    sum.rs = c1.rs + c2.rs;
    sum.paisa = c1.paisa + c2.paisa;
    if (sum.paisa >=100){
        int quot = sum.paisa/100;
        sum.rs += quot;
         rem = sum.paisa%100;
    }
    cout<<"Total sum: "<<sum.rs<<"."<<rem;
    return 0;
}