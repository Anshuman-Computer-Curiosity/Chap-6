#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called" << endl;
    }

    Rectangle(int l, int w) : length(l), width(w) {
        cout << "Rectangle created\n";
    }

    int calcArea() {
        return length * width;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed\n";
    }
};

int main() {
    Rectangle* rPtr = new Rectangle();  // dynamic object
    Rectangle& rRef1 = *rPtr;                 // reference to it

    // Create reference to dynamic object in one line
    Rectangle& rRef2 = *new Rectangle(5, 8);


    cout << "Area using reference: " << rRef2.calcArea() << endl;

    delete rPtr;  // You still must delete the original pointer
    delete &rRef2;
    return 0;
}