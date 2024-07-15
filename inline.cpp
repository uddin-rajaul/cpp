#include<iostream>
using namespace std;

// inline int product(int a, int b){
//     return a*b;
// }
float moneyRecv(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}
int main(){
    int money =10000;
    
    //cout<<"product of a and b is: "<<product(a,b);
    cout<<"If you have "<<money<<"You will recieve "<<moneyRecv(money)<<" after 1 year"<<endl;
    cout<<"If you are VIP and you have "<<money<<" You will recieve "<<moneyRecv(money, 1.110)<<" after 1 year"<<endl;

    return 0;
}