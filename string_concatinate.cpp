#include<iostream>
#include<string.h>

using namespace std;

class string_cat{
    string str1;
    public:
        string_cat(string st1){
            str1 = st1;
        }
        void display(){
            cout<<str1<<endl;
        }
        string_cat operator +(string_cat s){
            string_cat concat;
            concat.str1 = strcat(str1, s.str1);
            //strcpy(concat.str1,str1);
            return concat;
        }

};

int main(){
    string_cat obj("Rajaul");
    string_cat obj2(" Uddin");
    string_cat obj3 = obj + obj2;
    obj3.display();
    return 0;
}