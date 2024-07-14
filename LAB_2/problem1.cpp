// To write a C++ program to swap two private data members using friend functions.

#include <iostream>

using namespace std;
class B;
class A {
  int x;
public:
  void getNumber() {
    cin >> x;
  }

  void disp() {
    cout << x << endl;
  }

  friend void swap(A&, B&);
};
class B {
  int y;
public:
  void getNumber() {
    cin >> y;
  }

  void disp() {
    cout << y << endl;
  }

  friend void swap(A&, B&);
};

void swap(A& a, B& b) {
  int temp = a.x;
  a.x = b.y;
  b.y = temp;
}

int main() {
  A obj1;
  B obj2;

  cout << "Enter x: ";
  obj1.getNumber();
  cout << "Enter y: ";
  obj2.getNumber();
  swap(obj1, obj2);
  cout << "After Swapping : " << endl;
  obj1.disp();
  obj2.disp();
}