#include<iostream>
#define size 10
using namespace std;

class Array {
    int arr[size];
        public: 
            void getInput() {
                for (int i = 0; i < size; i++)
                {
                    cin >> arr[i];
                }
            }
            class Underflow {};
            class Overflow {};
            int getDataByIndex(int i) {
                if (i>=size)
                {
                    throw Overflow();
                }
                else if (i<0)
                {
                    throw Underflow();
                }
                else
                    return (arr[i]);

            }
};
int main()
{
    Array A1;
    A1.getInput();
    try {
    int i;
    cin >> i;
    cout << A1.getDataByIndex(i);
    }
    catch (Array :: Overflow) {
        cout << "Index greater than array size ";
    }
    catch (Array :: Underflow) {
        cout << "Index is negative ";
    }
    return 0;
}

// To cactch all exceptions catch(...);