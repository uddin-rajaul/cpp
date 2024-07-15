#include<iostream>
using namespace std;

//destructor never takes an arguement nor does it return any value
int count = 0;
class num{
    public:

    num(){
        count++;
        cout<<"Constructor is called for Object number:"<<count<<endl;
    }
    ~num(){
        cout<<"Destructor is called for object number: "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"====We are inside main function.========"<<endl;
    cout<<"=Creating 1st objects n1.="<<endl;
    num n1;
    {
        cout<<"===creating two more objects==="<<endl;
        cout<<"===============Entering this block============"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"======Back to main========="<<endl;
    return 0;
}