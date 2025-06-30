#include<iostream>
using namespace std;


int calcArea(int l, int w){
  return l * w;
}
void display(int length, int width){ //You need to pass variables here
  cout<<"Rectangle area = "<<calcArea(length, width)<<endl;
}

int main(){
  int length = 5, width = 6; //Local declaration
  display(length, width);
  return 0;
}