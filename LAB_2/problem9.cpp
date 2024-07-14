// Create a 'MATRIX' class of size m X n. Overload the ‘+’ operator to
//  Add Two MATRIX objects. Write a main function to implement it

#include <iostream>
using namespace std;

class MATRIX
{
    static int rows, cols;
    int matrix[6][6];

public:
    static void getRowsCols()
    {
        cout << "Enter the numnber of rows and columns: " << endl;
        cin >> rows >> cols;
    }
    void getMatrixElement();
    void displayMatrixSum();
   
    MATRIX operator+(MATRIX m)
    {
         MATRIX temp;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                temp.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }
        return temp;
    }
};
int MATRIX ::rows=0;
int MATRIX ::cols=0;

 void MATRIX:: getMatrixElement()
    {

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "Enter the element of index :" << i + 1 << j + 1 << endl;
                cin >> matrix[i][j];
            }
        }
    }

    void MATRIX:: displayMatrixSum()
    {
        cout<<"Sum of Matrix is : "<<endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout<<matrix[i][j]<<"  ";
            }
            cout<<endl;
        }
    }

int main()
{
    MATRIX M1, M2, M3;
    M1.getRowsCols();
    // M2.getRowsCols();
    M1.getMatrixElement();
    M2.getMatrixElement();
    M3 = M1 + M2;
    M3.displayMatrixSum();
    return 0;
}