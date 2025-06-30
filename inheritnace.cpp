
//Using Inheritance where Rectangle class extends Shape class
#include <iostream>
using namespace std;
class Shape{ //Base class - parent class
    protected: //restricts access to dervied class only
        int length, width; 
    public: 
        Shape(int l, int w): length(l), width(w){} //  Shape class constructor
        int calcArea() {
            return 0; // Just a placeholder - as Shape itself has not area unless a particular shape
         }
         void display() {
            cout<<" This is Shape area"<<endl;
         }
};

class Rectangle :public Shape  { // becomes derived class of Shape class 
    public:
          Rectangle(int l, int w): Shape(l,w){} //  Calling base class Shape's constructor
           int calcArea() {
                return length * width;
             }
          void display() {
             cout << "Rectangle: Length = " << length << ", Width = " << width 
                << ", Area = " << calcArea() << endl;
    }
};

int main() {
    // Creating Rectangle object
    Rectangle rectObj(5, 6);
    rectObj.display();
    Shape sobj = rectObj; //Shape class holding derived class object
    sobj.display();
    
    return 0;
}