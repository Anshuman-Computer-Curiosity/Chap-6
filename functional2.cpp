#include <cmath>       // For M_PI
#include <functional>  // For std::function
#include <iostream>
#include <map>

using namespace std;

// Function table: Stores functions for all shapes
map<string, function<double(double, double)>> shapeFunctions = {
    {"Rectangle", [](double l, double w) { return l * w; }},
    {"Circle", [](double r, double) { return M_PI * r * r; }},
    {"Square", [](double s, double) { return s * s; }},
    {"Triangle", [](double b, double h) { return 0.5 * b * h; }}};

// Generic function to display area for any shape
void displayArea(const string& shape, double param1, double param2 = 0) {
  if (shapeFunctions.count(shape)) {
    cout << shape << " Area: " << shapeFunctions[shape](param1, param2) << endl;
  } else {
    cout << "Invalid shape!\n";
  }
}

int main() {
  // Example calls
  displayArea("Rectangle", 5, 6);  // Rectangle: length=5, width=6
  displayArea("Circle", 4);        // Circle: radius=4
  displayArea("Square", 3);        // Square: side=3
  displayArea("Triangle", 5, 8);   // Triangle: base=5, height=8

  return 0;
}