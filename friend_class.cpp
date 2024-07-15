#include <iostream>
using namespace std;

// forward declaration... using the class before actually definig it.
class complex;

class Calculator
{
public:
    // int add(int a, int b)
    // {
    //     return (a + b);
    // }
    int sumrealComplex(complex, complex); //told the program that we will use data member from class complex
    int sumcompComplex(complex, complex); 
};
class complex
{
    int a, b;
    //telling the program that the sumrealComplex function is actually my friend and let it use my private data members.. ie; a and b
    //individually declaring functions as friends
    // friend int Calculator ::sumrealComplex(complex, complex);
    // friend int Calculator ::sumcompComplex(complex, complex);
    // declaring the entire class as friend...
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumrealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumcompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex com1, com2;
    com1.setNumber(4, 5);
    com2.setNumber(5, 6);
    Calculator calc;
    int res = calc.sumrealComplex(com1, com2);
    int cp = calc.sumcompComplex(com1, com2);
    cout << "The result: " << res << endl;
    cout << "The result: " << cp << endl;

    return 0;
}