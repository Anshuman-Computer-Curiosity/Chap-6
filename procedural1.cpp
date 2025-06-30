#include <iostream>
using namespace std;

int calcArea(int l, int w) { return l * w; }
void display(int area) { cout << "Area of Rectangle = " << area << endl; }
void categorize(int area) {
  // Using if-else to categorize area size
  if (area > 20) {
    cout << "Rectangle is large rectangle\n";
  } else {
    cout << "Rectangle is small rectangle\n";
  }
}

int main() {
  int numOfRectangles = 2;
  int length, width, area;

  for (int i = 1; i <= numOfRectangles; i++) {
    cout << "Enter length and width of Rectangle " << i << ": ";
    cin >> length >> width;

    // Using function to calculate area
    area = calcArea(length, width);
    display(area);
    categorize(area);
  }

  return 0;
}