/*
Program: Given that an EMPLOYEE class contains following members:
 data members: Employee number, Employee name, Basic, DA, IT, Net Salary
 and print data members. Write a C++ program to read the data of N employee
 and compute Net salary of each employee (DA=52% of Basic and Income Tax
 (IT) =30% of the gross salary)
*/
#include <iostream>
using namespace std;
class EMPLOYEE
{
private:
    int Employee_number;
    string Employee_name;
    float Basic, DA, IT, netSalary;

public:
    void inputData()
    {
        cout << "Enter employee number  " << " :";
        cin >> Employee_number;
        cout << "Enter employee name " << " :";
        cin >> Employee_name;
        cout << "Enter Basic Salary " << " :";
        cin >> Basic;
    }

    void calculateSalary()
    {
        DA = 0.52 * Basic;
        float grossSalary = Basic + DA;
        IT = 0.30 * grossSalary;
        netSalary = grossSalary - IT;
    }

    void displayData()
    {
        cout << "----------------------------------------------------" << endl;
        cout << "Employee Number: " << Employee_number << endl;
        cout << "Employee Name: " << Employee_name << endl;
        cout << "Basic Salary: " << Basic << endl;
        cout << "DA: " << DA << endl;
        cout << "IT: " << IT << endl;
        cout << "Net Salary: " << netSalary << endl
             << endl;
        cout << "----------------------------------------------------";
    }
};

int main()
{
    EMPLOYEE E[100];
    int n;
    cout << "Enter the number of emoloyees :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data of employee " << i + 1 << " :" << endl;
        E[i].inputData();
        E[i].calculateSalary();
        cout << "\n\n";
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Data of employee " << i + 1 << " :" << endl;
        E[i].displayData();
    }
}