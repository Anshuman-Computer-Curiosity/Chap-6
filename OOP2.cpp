#include <iostream>
using namespace std;

// Base class Shape
class Shape {
 public:
  virtual int calcArea() = 0;  // Pure virtual function (polymorphism)
  virtual void display() = 0;  // Virtual function for displaying details
};

// Rectangle class inherits from Shape
class Rectangle : public Shape {
 private:
  int length, width;

 public:
  Rectangle(int l, int w) : length(l), width(w) {}

  int calcArea() override {
    return length * width;  // Now returns area instead of printing
  }

  void categorizeRectangle() {
    if (length == width) {
      cout << "This is a Square." << endl;
    } else {
      cout << "This is a Rectangle." << endl;
    }
  }

  void display() override {
    cout << "Rectangle Area: " << calcArea() << endl;
    categorizeRectangle();
  }
};

// Circle class inherits from Shape
class Circle : public Shape {
 private:
  double radius;

 public:
  Circle(double r) : radius(r) {}

  int calcArea() override {
    return 3.14 * radius * radius;  // Returns area as int
  }

  void display() override { cout << "Circle Area: " << calcArea() << endl; }
};

int main() {
  Shape* shape1 = new Rectangle(4, 4);  // Square
  Shape* shape2 = new Rectangle(5, 6);  // Rectangle
  Shape* shape3 = new Circle(2.5);      // Circle

  shape1->display();
  shape2->display();
  shape3->display();

  delete shape1;
  delete shape2;
  delete shape3;
  return 0;
}