/*
Problem 5:
 To write a program to categorize employees based on designation using
static data members.
Algorithm:
1. Start
2. Create a class for employee with two count variables declaring as a static
member and employee id, name and designation as other data members.
3. Get the employee id name and designation from the user.
4. If the designation is MANAGER increment first count by 1 and if it is
ENGINEER increment second count by 1.
5. Finally display the total number of managers, engineers and employees.
6. Stop.
*/
#include <iostream>
#define N 3
using namespace std;

class Employee
{
private:
    static int managerCount;
    static int engineerCount;
    int employeeId;
    string name;
    string designation;

public:
    void getData()
    {
        cout << "Enter employee id : ";
        cin >> employeeId;
        cout << "Enter employee name : ";
        cin >> name;
        cout << "Enter designation (ENGINEER/MANAGER): ";
        cin >> designation;
    }

    void categorize()
    {
        if (designation == "MANAGER" || designation == "manager" || designation == "Manager")
        {
            managerCount++;
        }
        else if (designation == "ENGINEER" || designation == "engineer" || designation == "Engineer")
        {
            engineerCount++;
        }
    }

    void displayCounts()
    {
        cout << "Total Managers: " << managerCount << endl;
        cout << "Total Engineers: " << engineerCount << endl;
        cout << "Total Employees: " << managerCount + engineerCount << endl;
    }
};

// Define static member variables outside the class definition
int Employee::managerCount = 0;
int Employee::engineerCount = 0;

int main()
{
    Employee e;
    for (int i = 0; i < N; i++)
    {
        e.getData();
        e.categorize();
    }
    e.displayCounts();
    return 0;
}
