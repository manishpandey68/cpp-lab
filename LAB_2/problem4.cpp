#include <iostream>
using namespace std;

class TIME
{
    int hours, minutes, seconds;

public:
    TIME() : hours(0), minutes(0), seconds(0) {}

    TIME(int hr, int min, int sec) : hours(hr), minutes(min), seconds(sec) {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }

    void getTime() {
        cout << "Enter hour, minute, and second: ";
        cin >> hours >> minutes >> seconds;
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }

    TIME operator+( TIME &T2)  {
        int totalSeconds = (hours + T2.hours) * 3600 + (minutes + T2.minutes) * 60 + (seconds + T2.seconds);
        return TIME(totalSeconds / 3600, (totalSeconds % 3600) / 60, totalSeconds % 60);
    }

    TIME operator-(TIME &T2) {
    int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
    int totalSeconds2 = T2.hours * 3600 + T2.minutes * 60 + T2.seconds;
    int diffSeconds = totalSeconds1 - totalSeconds2;

    if (diffSeconds < 0) {
        diffSeconds = -diffSeconds; 
    }

    return TIME(diffSeconds / 3600, (diffSeconds % 3600) / 60, diffSeconds % 60);
}

    bool operator>( TIME &T2)  {
        return (hours > T2.hours);
    }

    void display()  {
        if (hours < 10) cout << '0';
        cout << hours << ':';
        if (minutes < 10) cout << '0';
        cout << minutes << ':';
        if (seconds < 10) cout << '0';
        cout << seconds;
    }
};

int main() {
    TIME T1, T2, T3;

    T1.getTime();
    T2.getTime();

    cout << "Sum is: ";
    T3 = T1 + T2;
    T3.display();
    cout << endl;

    cout << "Difference is: ";
    T3 = T1 - T2;
    T3.display();
    cout << endl;

    cout << "T1 > T2: " << (T1 > T2 ? "true" : "false") << endl;

    return 0;
}
