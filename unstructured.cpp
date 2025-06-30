#include <iostream>
using namespace std;

int main() {
  int length1 = 5, width1 = 6;
  int length2 = 4, width2 = 4;
  int area1, area2;

  goto calc1;  // Jump to first calculation

calc1:
  area1 = length1 * width1;
  cout << "Area of Rectangle 1: " << area1 << endl;
  goto calc2;  // Jump to second calculation

calc2:
  area2 = length2 * width2;
  cout << "Area of Rectangle 2: " << area2 << endl;
  return 0;
}