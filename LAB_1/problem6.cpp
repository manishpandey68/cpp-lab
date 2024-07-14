/*To write a C++ program to add two private data members using friend functions.
 */
#include <iostream>
using namespace std;

class ADD
{
private:
    int a, b;

public:
    void getNum()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend void add(ADD);
};

void add(ADD object)
{
    int sum = object.a + object.b;
    cout << "Sum using friend function: " << sum << endl;
}

int main()
{
    ADD obj;
    obj.getNum();
    add(obj);
    return 0;
}
