#include<iostream>
using namespace std;
class convert{
    private:
        float feet;
    public:
        convert(){
            feet = 0.0;
        }
        void read(){
            cout<<"Enter feet: ";
            cin>>feet;
        }
        operator float(){
            float cm;
            cm = feet*12;
            return cm;
        }
        void display(){
            cout<<"feet = "<<feet<<endl;
        }
};
int main(){
    convert c;
    int cm;
    c.read();
    cm = c;
    c.display();

    return 0;
}