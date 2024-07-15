#include<iostream>
using namespace std;
class convert{
    private:
        float feet;
    public:
        // convert(){
        //     feet = 0.0;
        // }
        convert(float m){
            feet = m*2;
        }
        void display(){
            cout<<"feet = "<<feet<<endl;
        }
};
int main(){
    convert c;
    int m;
    cout<<"Enter length in meter: ";
    cin>>m;
    c = m;
    c.display();

    return 0;
}