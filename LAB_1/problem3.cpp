/*
Problem 3:
Write a program that checks the order of a medicine from a pharmacy store.
The program should read the order quantity and the medicine quantity in the
store. When the order quantity is more than the store quantity, your
program should display the message “No enough quantity”. When the order
quantity is less than the store quantity, you have to check that the order
quantity must be not more than 16 except there is more than 40 items in the
store. The messages that will be displayed in that cases are “Your order is
accepted” OR “You cannot order more than 16 item”
*/
/*
Sample outputs:
Enter the store quantity: 60
Enter the order quantity: 100
No enough quantity
Enter the store quantity: 41
Enter the order quantity: 20
Your order is accepted
Enter the store quantity: 40
Enter the order quantity: 20
You cannot order more than 16 item
*/
#include <iostream>
using namespace std;
class Pharmacy
{
private:
    int store_quantity;
    int order_quantity;

public:
    void read_order()
    {
        cout << "Enter the store quantity:";
        cin >> store_quantity;
        cout << "Enter the order quantity:";
        cin >> order_quantity;
        if (order_quantity > store_quantity)
        {
            cout << "No enough quantity";
        }
        else if (order_quantity > 16 && store_quantity <= 40)
        {
            cout << "You cannot order more than 16 item";
        }
        else
            cout << "Your order is accepted";
    }
};

int main()
{
    Pharmacy p;
    p.read_order();
    return 0;
}