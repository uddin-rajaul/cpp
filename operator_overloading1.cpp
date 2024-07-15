#include<iostream>
using namespace std;

class counter{
    int c;
    public:
    counter(){
        c = 0;
    }
    void display(){
        cout<<"c= "<<c<<endl;

    }
    void operator ++()
    {
        ++c;
    }
    void operator ++(int )
    {
        c++;
    }
};
int main(){
    counter c;
    c.display();
    ++c;
    c.display();
    c++;
    c.display();
    
    return 0;
}