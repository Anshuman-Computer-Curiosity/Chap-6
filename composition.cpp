//Showing use of Composition by definining a shape class and calling its function
#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length,width;
    public:
          Rectangle(int l, int w): length(l), width(w){} //  Calling base class Shape's constructor
           int calcArea()  {
                return length * width;
             }
          void display()  {
             cout << "Rectangle: Length = " << length << ", Width = " << width 
                << ", Area = " << calcArea() << endl;
    }
};
class Shape{ //Should be defined after Rectangle class
    private:
        Rectangle robj; // Showing composition as SHape class composes Rectangle
    public:
        Shape(int l, int w): robj(l,w){} // Shape class constructor calling REctangle class constructor
        void show(){
            robj.display(); // calling rectangle class display() as its composes
        } 

};

int main() {
    // Creating Rectangle object
    Shape sobj(7,6);
    sobj.show();
    
    return 0;
}