#include <iostream>
using namespace std;

class shop
{
    int itemID[100], itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void getPrice(void);
    void displayPrice(void);
};
void shop ::getPrice(void)
{
    cout << "Enter ID of your item no. " << counter + 1 << ": " << endl;
    cin >> itemID[counter];
    cout << "Enter price of your item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop sh;
    sh.initCounter();
    sh.getPrice();
    sh.getPrice();
    sh.getPrice();
    sh.getPrice();
    sh.displayPrice();
    return 0;
}