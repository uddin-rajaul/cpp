#include <iostream>
using namespace std;

// student -> test
// student -> sports
// test -> result
// sports -> result

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your Roll no. is : " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your result is: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score: " << score << endl;
    }
};
class result : public test, public sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            print_marks();
            print_number();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};
int main()
{
    result st;
    st.set_number(101);
    st.set_marks(85,56.5);
    st.set_score(9);
    st.display();
    return 0;
}