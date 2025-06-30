#include <iostream>
using namespace std;

class Shape {  // Base class
 public:
  virtual double calcArea() = 0;  // Pure virtual function that will be
                                  // overriden in derived class
  virtual void display() = 0;     // Pure virtual function
};
class Rectangle : public Shape {  // inherits Shape class publically
 private:
  int length, width;

 public:
  Rectangle(int l, int w) : length(l), width(w) {};  // constructor
  double calcArea() override { return length * width; }
  void display() override {
    cout << "Area of Rectangle = " << (int)calcArea() << endl;
    categorize();
  }
  void categorize() {
    if (calcArea() > 20) {
      cout << "Rectangle is large rectangle\n";
    } else {
      cout << "Rectangle is small rectangle\n";
    }
  }
};
class Circle : public Shape {  // inherits Shape class publically
 private:
  double radius;

 public:
  Circle(double r) : radius(r) {};  // Constructor for circle class
  double calcArea() override { return 3.14 * radius * radius; }
  void display() override { cout << "Area of Circle = " << calcArea() << endl; }
};

int main() {
  Shape* shape1 = new Rectangle(5, 6);  // Creating Rectnagle object
  Shape* shape2 = new Rectangle(4, 4);  // Creating Rectnagle object - Square
  Shape* shape3 = new Circle(2.5);      // Creating Circle object

  shape1->display();
  shape2->display();
  shape3->display();

  delete shape1;
  delete shape2;
  delete shape3;  // Since no automatic garbage collection in C++ - prevents
                  // memory leak
  return 0;
}