
#include<iostream>
using namespace std;
class Radian{
    float rad;
    public:
    // Radian()
    // {
    //     rad=0.0;
    // }
    Radian(float r)
    {
        rad=r;
    }

    void display()
    {
        cout<<"radian = "<<rad;
    }
};
class Degree
{
    float deg;
    public:

   operator Radian()
   {
       float ra;
       ra=deg*3.14/180;
       return ra;
   }

   void input()
   {
         cout<<"Enter degree = ";
         cin>>deg;
   }

};
int main()
{
    Degree d;
    d.input();
    Radian r=d;
    r.display();
}