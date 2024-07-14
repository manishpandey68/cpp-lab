/*
Problem 2:
Write a program that determines the maximum and the minimum of three
numbers.
*/
#include <iostream>
using namespace std;
class MINMAX
{
private:
    int n1, n2, n3, min, max;

public:
    void getNumbers()
    {
        cout << "Enter three numbers :";
        cin >> n1 >> n2 >> n3;
    }
    void findMinMax()
    {
        max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
        min = (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);
    }
    void displayMax()
    {
        cout << "Maximum is " << max << endl;
    }
    void displayMin()
    {
        cout << "Minimum is " << min << endl;
    }
};
int main()
{
    MINMAX N;
    N.getNumbers();
    N.findMinMax();
    N.displayMax();
    N.displayMin();
    return 0;
}