#include <cmath>
#include <functional>
#include <iostream>
using namespace std;

// pure function for area calculation
function<double(double, double)> calcRectArea =
    [](double length, double width) { return length * width; };

// pure function for area calculation
function<double(double, double)> calcCircleArea =
    [](double radius, double unused) { return M_PI * radius * radius; };

// Higher order function: Works for all shapes
void displayResult(double param1, double param2,
                   function<double(double, double)> areafunc,
                   string shapeName) {
  cout << shapeName << "Area = " << areafunc(param1, param2) << endl;
}

int main() {
  double length = 5, width = 6, radius = 4;

  displayResult(length, width, calcRectArea, "Rectangle");
  displayResult(radius, 0, calcCircleArea, "Circle");

  return 0;
}