#include <iostream>
using namespace std;

int main() {
  int numOfRectangles = 2;
  int length, width, area;

  for (int i = 1; i <= numOfRectangles; i++) {
    cout << "Enter length and width of Rectangle " << i << ": ";
    cin >> length >> width;

    // Using function to calculate area
    area = length * width;

    // Using if-else to categorize area size
    if (area > 20) {
      cout << "Rectangle " << i << " is large rectangle\n";
    } else {
      cout << "Rectangle " << i << " is small rectangle\n";
    }
  }

  return 0;
}