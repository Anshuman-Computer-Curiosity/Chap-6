//  Showing use of abstraction by creating abstract class
// Showing use of Polymorphism using virtual function
//Using Inheritance where Rectangle class extends Shape class
#include <iostream>
using namespace std;
class Shape{ //Base class - parent class - Abstract class
    protected: //restricts access to dervied class only
        int length, width; 
    public: 
        Shape(int l, int w): length(l), width(w){} //  Shape class constructor
        virtual int calcArea() = 0; //Pure virtual function
        virtual void display() = 0; // Pure virtaul function
};

class Rectangle :public Shape  { // becomes derived class of Shape class 
    public:
          Rectangle(int l, int w): Shape(l,w){} //  Calling base class Shape's constructor
           int calcArea() override {
                return length * width;
             }
          void display() override {
             cout << "Rectangle: Length = " << length << ", Width = " << width 
                << ", Area = " << calcArea() << endl;
    }
};

int main() {
    // Creating Rectangle object
    Rectangle rectObj(5, 6);
    // rectObj.display();
    Shape *sobj = &rectObj; //Shape class holding derived class object
    sobj->display(); // Calling rectangle class display() function
    
    return 0;
}