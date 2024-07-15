#include <iostream>
using namespace std;
class Account
{

private:
    int acc_no, balance;
    static int min_balance;

public:
    void read()
    {
        cout << "Enter the account number";
        cin >> acc_no;
        cout<<"Enter Balance: ";
        cin>>balance;
    }
    static void read_static()
    {
        cout << "Enter the minimum balance: ";
        cin >> min_balance;
    }

    void display()
    {
        cout << "The account number is: " << acc_no << endl;
        cout << "The balance is: " << balance <<endl;
    }
    static void display_static()
    {
        cout << "The minimum balance: " << min_balance<<endl;
    }
};

int Account::min_balance;
int main()
{
    Account acc[5];
    int i;
    Account::read_static();

    for (i = 1; i < 2; i++)
    {
        acc[i].read();
    }
    for (i = 1; i < 2; i++)
    {
        acc[i].display();
        acc[i].display_static();
    }
}