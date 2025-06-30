#include <iostream>
using namespace std;

// Base class (Parent class) - Shape
class Shape {
protected:
    double length, width; // Protected members for derived classes

public:
    // Constructor
    Shape(double l, double w) : length(l), width(w) {}

    // Function for calculating area (Not virtual, so no polymorphism)
    double calculateArea() {
        return 0; // Placeholder (won't be overridden)
    }

    // Function to display details
    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class (Child class) - Rectangle
class Rectangle : public Shape {
public:
    // Constructor calls the base class constructor
    Rectangle(double l, double w) : Shape(l, w) {}

    // This function **hides** (not overrides) the base class function
    double calculateArea() {
        return length * width;
    }

    // This function **hides** (not overrides) the base class function
    void display() {
        cout << "Rectangle: Length = " << length << ", Width = " << width 
             << ", Area = " << calculateArea() << endl;
    }
};

int main() {
    // Creating Rectangle object
    Rectangle rect(5, 6);
    
    // Directly calling functions (no pointer used)
    rect.display();

    // Base class reference holding derived class object (no polymorphism)
    Shape shape = rect;
    shape.display();  // Calls Shape's display(), not Rectangle's

    return 0;
}