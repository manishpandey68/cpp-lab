// Program to convert Polar Coordinate to Cartesian.

#include<iostream>
#include<cmath>
#define pi 3.14159265
using namespace std;

class polar {
    float radius , theta;
        public : 
            polar(float r , float a) {
                radius = r;
                theta = (pi*a)/180;
            }

            float getRad() {
                return radius;
            }
            float getAngle() {
                return theta;
            }
};

class catrtesian {
    float x , y;
        public : 
            catrtesian() {}

            catrtesian(polar p) {
                float a = p.getAngle();
                float r = p.getRad();
                x  = r * cos(a);
                y  = r * sin(a);
            }

        
            void show() {
                cout << "X : " << x << endl << "Y : " << y;
            }
};

int main() {
    int radius, angle;
    cout << "Enter the value of radius : ";
    cin >> radius;

    cout << "Enter the value of angle in degrees : ";
    cin >> angle ;

    polar p(radius,angle);
    catrtesian c;
    c=p;
    c.show();
    return 0;
}