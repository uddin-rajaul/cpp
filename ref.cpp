#include<iostream>
using namespace std;
class base{
    private:
    int x=10;
    public:
    void display(){
        cout<<x<<endl;
    }
};
class derive : public base{
    private:
    int y;
    public:
    void display(){
        cout<<y<<endl;
    }

};
int main(){
    derive b;
    b.base::display();
    return 0;
}