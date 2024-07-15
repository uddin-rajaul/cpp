#include<iostream>
using namespace std;
class box{
    private:
    double length, breadth, height;
    public:
    box(double l =0.2, double b = 0.2, double h = 0.2){
        length = l;
        breadth = b;
        height = h;
    }
    double volume(){
        return length*breadth*height;
    }
    int compare(box b){
        cout<<"This volume: "<<this->volume()<<endl;
        cout<<"vox: "<<b.volume()<<endl;
        return this->volume();
    }
};
int main(){
    box b(5.2,6.3,3.5);
    b.compare(b);
    return 0;
}