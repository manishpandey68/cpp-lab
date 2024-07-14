/*
Problem 1:
Create a 'DISTANCE' class with :
- feet and inches as data members
- member function to input distance
- member function to output distance
- member function to add two distance objects
Write a main function to create objects of DISTANCE class.
Input two distances and output the sum.
*/
#include <iostream>
#include <string>
using namespace std;
class DISTANCE
{
    int feet, inches;

public:
    void InputDistance()
    {
        cout << "Enter the distance in feet and inches: " << endl;
        cin >> feet >> inches;
    }
    void add(DISTANCE d1, DISTANCE d2)
    {
        int k;
        k = d1.inches + d2.inches + (d1.feet + d2.feet) * 12;
        feet = k / 12;
        inches = k % 12;
    }
    void display()
    {
        cout << "Sum of distances is : " << feet << " feet and " << inches << " inches." << endl;
    }
};

int main()
{
    DISTANCE d1, d2, d3;
    d1.InputDistance();
    d2.InputDistance();
    d3.add(d1, d2);
    d3.display();
    return 0;
}