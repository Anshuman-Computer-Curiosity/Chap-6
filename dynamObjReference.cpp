#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called" << endl;
    }

    Rectangle(int l, int w) : length(l), width(w) {
        cout << "Rectangle with length "<<l<< " width "<<w<<" created\n";
    }

    int calcArea() {
        return length * width;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed\n";
    }
};

int main() {
    // Rectangle* rPtr = new Rectangle(5,8); //dynamic object of class Rectangle
    // Rectangle& rRef1 = *rPtr; // stores reference to it

    Rectangle& rRef1 = *(new Rectangle(5,8)); // combines

    cout<<" Area of rectangle = "<<rRef1.calcArea()<<endl;
    // delete rPtr; //You still need to delete orginal ptr
    delete &rRef1;
    return 0;
}