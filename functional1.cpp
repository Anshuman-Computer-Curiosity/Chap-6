#include <cmath>
#include <functional>
#include <iostream>
#include <map>
using namespace std;

map<string, function<double(double, double)>> shapeFunc = {
    {"Rectangle", [](double l, double w) { return l * w; }},
    {"Square", [](double s, double) { return s * s; }},
    {"Triangle", [](double b, double h) { return 0.5 * b * h; }},
    {"Circle",
     [](double r, double) {
       return M_PI * r * r;
       ;
     }},

};

void displayArea(const string& shape, double param1, double param2 = 0) {
  if (shapeFunc.count(shape)) {
    cout << shape << "Area = " << shapeFunc[shape](param1, param2) << endl;
  } else {
    cout << "Invalid shape. \n";
  }
}

int main() {
  displayArea("Rectangle", 5, 6);
  displayArea("Square", 4);
  displayArea("Triangle", 5, 8);
  displayArea("Circle", 2.5);

  return 0;
}