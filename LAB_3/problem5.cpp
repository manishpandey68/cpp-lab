// Program to convert time (hour, minute and second) in 12-hr format to 24-hr format.

#include <iostream>
#include <string>

using namespace std;

class twentyfour;

class twelve
{
    int hr, min, sec;
    string ampm;

public:
    twelve() {}
    twelve(int h, int m, int s, string am) : hr(h), min(m), sec(s), ampm(am) {}

    operator twentyfour();

    void display()
    {
        cout << hr << ":" << min << ":" << sec << " " << ampm << endl;
    }
};

class twentyfour
{
    int hr, min, sec;

public:
    twentyfour() {}
    twentyfour(int h, int m, int s) : hr(h), min(m), sec(s) {}

    int getHr()
    {
        return hr;
    }

    int getMin()
    {
        return min;
    }

    int getSec()
    {
        return sec;
    }

    void display()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
};

twelve::operator twentyfour()
{

    if (ampm == "AM")
    {
        return twentyfour(hr, min, sec);
    }
    else
    {
        if (hr == 12)
        {
            return twentyfour(hr, min, sec);
        }
        else
        {
            return twentyfour(hr + 12, min, sec);
        }
    }
}

int main()
{
    int hr, min, sec;
    string ampm;

    cout << "Enter hour minutes and second in 12 hour format : ";
    cin >> hr >> min >> sec;

    cout << "Is it am or pm (am/pm) : ";
    cin >> ampm;
    
    twentyfour t24;
    twelve t12(hr, min, sec, ampm);

    t24 = t12;

    cout << "12-hour format: ";
    t12.display();
    
    cout << "24-hour format: ";
    t24.display();

    return 0;
}