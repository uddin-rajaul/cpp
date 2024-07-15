#include<iostream>
using namespace std;

class complex{
    int a, b;
    public: 
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        //declaring friend func.
        //friend func that has class as return type and takes object as an arguement...
        //also eg of return object
        // non member -> sumcomplex func is aloowed to use private data of class(members)
        friend complex sumComplex(complex co1, complex co2);

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;

        }
};
complex sumComplex(complex co1, complex co2){
            complex co3;
            co3.setNumber((co1.a + co2.a), (co1.b + co2.b));
            return co3; //return object
        }
int main(){
    complex c1, c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(4,3);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
/*
properties of friend func....
1. Not in the scope of class... 
2. Since it is not in the scope of the class, it cannot be called from the object of the class. c1.sumComplex --invalid
3. can be invoked without the help of any object
4. Usually contains as object as arguments. 
5. can be declared inside public or private part of the class.
6. it cannot access the members directly by their names and need object_name.member_name to access any member -> co1.a + co2.a

*/