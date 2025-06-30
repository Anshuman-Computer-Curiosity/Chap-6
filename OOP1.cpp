#include <iostream>
using namespace std;

class Rectangle {
 private:
  int length, width;
  int calcArea() { return length * width; }
  void display(int area) { cout << "Area of Rectangle = " << area << endl; }

 public:
  Rectangle(int l, int w) {  // constructor
    length = l;
    width = w;
  }

  void categorize() {
    int area = calcArea();  // call to calcArea() function to return the area
    display(area);          // call to display to print message
    if (area > 20) {
      cout << "Rectangle is large rectangle\n";
    } else {
      cout << "Rectangle is small rectangle\n";
    }
  }
};

int main() {
  int numOfRectangles = 2;
  int length, width, area;

  for (int i = 1; i <= numOfRectangles; i++) {
    cout << "Enter length and width of Rectangle " << i << ": ";
    cin >> length >> width;

    // Using function to calculate area
    Rectangle rectObj(
        length, width);  // creating rectangle object and call to constructor
    rectObj.categorize();
  }

  return 0;
}