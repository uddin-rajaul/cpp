#include <iostream>
#include <string>
using namespace std;

class convert
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void convert ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}
void convert :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void convert :: ones_complement(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}
void convert :: display(void){
    cout<<"displaying your binary number..."<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    convert bin;
    bin.read(); 
    bin.chk_bin();
    //bin.display();
    bin.ones_complement();
    bin.display();


}




// OOPs - classes and objescts...
//  cpp -> initially called C with classes
//  class -> extension of structure
//  structure had limitations
//   -> members are public
//   -> No methods
//  classes -> structures + more
//  classes can have methods and properties
//  classes -> can make few members as private or public
//  Structures in C++ are typedefed
//  You can declare objects with the class declaration
//  class Employee{
//          //class defination
//  };
// object.private_var = value is not acceptable

// Nesting of function