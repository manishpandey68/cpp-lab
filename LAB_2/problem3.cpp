// To write a C++ program to manipulate complex numbers using operator overloading. (addition,subtraction,multiplication,division)

#include <iostream>
using namespace std;
class Complex {
  float real, imag;

 public:
  Complex() {
    real = 0;
    imag = 0;
  }
  Complex(int rl, int img) : real(rl), imag(img) {}
  void getData() {
    cout << "Enter real and imaginary part :" << endl;
    cin >> real >> imag;
  }
  void display() {
    if (imag < 0) {
      cout << real << imag << "i";
    } else {
      cout << real << "+" << imag << "i";
    }
  }
  Complex operator+(Complex &C2) {
    Complex C3;
    C3.real = C2.real + real;
    C3.imag = C2.imag + imag;
    return C3;
  }
  Complex operator-(Complex &C2) {
    Complex C3;
    C3.real = real - C2.real;
    C3.imag = imag - C2.imag;
    return C3;
  }
  Complex operator*(Complex &C2) {
    Complex C3;
    C3.real = real * C2.real - imag * C2.imag;
    C3.imag = real * C2.imag + imag * C2.real;
    return C3;
  }
  Complex operator/(Complex &C2) {
    Complex C3;
    float denom = C2.real * C2.real + C2.imag * C2.imag;
    C3.real = (real * C2.real + imag * C2.imag) / denom;
    C3.imag = (imag * C2.real - real * C2.imag) / denom;
    return C3;
  }
};
int main() {
  Complex C1, C2, C3;
  C1.getData();
  C2.getData();
  cout << "The sum is :";
  C3 = C1 + C2;
  C3.display();
  cout << endl;
  cout << "The difference is :";
  C3 = C1 - C2;
  C3.display();
  cout << endl;
  cout << "The product is :";
  C3 = C1 * C2;
  C3.display();
  cout << endl;
  cout << "The division is :";
  C3 = C1 / C2;
  C3.display();
  cout << endl;
  return 0;
}