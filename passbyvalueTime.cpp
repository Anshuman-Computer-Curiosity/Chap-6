#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;

    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }

    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

// Function to add two Time objects (passed by value)
Time addTime(Time t1, Time t2) {
    Time result;
    result.hours = t1.hours + t2.hours;
    result.minutes = t1.minutes + t2.minutes;

    // Handle minute overflow
    if (result.minutes >= 60) {
        result.hours += result.minutes / 60;
        result.minutes %= 60;
    }

    return result;  // return a copy (also by value)
}

int main() {
    Time time1, time2, sum;

    cout << "Enter first time:\n";
    time1.input();

    cout << "Enter second time:\n";
    time2.input();

    // Pass by value: time1 and time2 are copied into addTime
    sum = addTime(time1, time2);

    cout << "\nSum of times:\n";
    sum.display();

    cout << "\nOriginal times remain unchanged:\n";
    cout << "Time 1: "; time1.display();
    cout << "Time 2: "; time2.display();

    return 0;
}