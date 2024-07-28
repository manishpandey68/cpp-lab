// Exception class hierarchy
#include<conio.h>
#include<iostream>
using namespace std;

class MathError{};
class divideByZero : public MathError {

}
class MathProblems{
    float a, b;
        public: 
            getInput() {
                cin >> a >> b;
            }
            float divide () {
                if (b==0)
                {
                    throw divideByZero();
                    return (a/b);
                    cout << set_w(10);
                }
                
            }
};


















int main()
{
    MathProblem M1;
    M1.getInput();
    try{
        cout<<M1.divide();
    }
    return 0;
}