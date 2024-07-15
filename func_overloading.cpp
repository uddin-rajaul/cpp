#include <iostream>
using namespace std;
void area(int l, int b)
{
    int a = l * b;
    cout << "Area :" << a << endl;
}
void area(double l, int b)
{
    double a = l * b;
    cout << "Area :" << a << endl;
}
void area(int l, double b)
{
    double a = l * b;
    cout << "Area :" << a << endl;
}
int main()
{
    area(2, 3);
    area(2.3, 3);
    area(2, 3.5);

    return 0;
}