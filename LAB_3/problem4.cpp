/*
 Program to convert time (hour, minute and second) in 24-hr format to 
12-hr format.
*/
#include<iostream>
using namespace std;

class twentyfour  {
    int hr, min, sec;
    public:
        twentyfour() {}
        twentyfour(int h, int m, int s) {
            hr = h;
            min = m;
            sec = s;
        }

        int getHr() {
            return hr;
        }
        int getMin() {
            return min;
        }
        int getSec() {
            return sec;
        }

        void display() {
            cout << hr << " : " << min << " : " << sec << endl;
        }
};

class twelve {
    int hr, min, sec;
    string ampm;
    public:
        twelve() {}
        twelve(int h, int m, int s) {
            hr = h;
            min = m;
            sec = s;
        }

        twelve(twentyfour &other) {
            if (other.getHr() == 0) {
                hr = 12;
                ampm = "AM";
            } else if (other.getHr() == 12) {
                hr = 12;
                ampm = "PM";
            } else if (other.getHr() > 12) {
                hr = other.getHr() - 12;
                ampm = "PM";
            } else {
                hr = other.getHr();
                ampm = "AM";
            }
            min = other.getMin();
            sec = other.getSec();
        }

        void display() {
            cout << hr << " : " << min << " : " << sec << " " << ampm << endl;
        }
};

int main()
{
    int hr, min, sec;
    cout << "Enter time in 24-hour format :" << endl << "Enter hour minute and second : ";
    cin >> hr >> min >> sec;
    twentyfour t24(hr, min, sec);
    cout << "24-hour format: ";
    t24.display();

    twelve t12(t24);
    cout << "12-hour format: ";
    t12.display();

    return 0;
}