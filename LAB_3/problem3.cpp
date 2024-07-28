// Program to convert Cartesian coordinate to Polar.
#include <iostream>
#include <cmath>
using namespace std;

class polar
{
    float radius, theta;

public:
    polar() {}
    polar(float r, float a)
    {
        radius = r;
        theta = a;
    }
    void show()
    {
        cout << "r : " << radius << endl
             << "theta : " << theta;
    }
};

class catrtesian
{
    float x, y;

public:
    catrtesian() {}
    catrtesian(float xco, float yco)
    {
        x = xco;
        y = yco;
    }

    operator polar()
    {
        float r = sqrt(x * x + y * y);
        float ang = atan(y / x);
        return polar(r, ang);
    }
};

int main()
{
    int x, y;
    cout << "Enter x co-ordinate : ";
    cin >> x;
    cout << "Enter y co-ordinate : ";
    cin >> y;
    catrtesian c(x,y);
    polar p;
    p = c;
    p.show();
    return 0;
}