#include<iostream>
using namespace std;

// Creating a class
class Rectangle{ // abstraction
  private : // private access sepecifier - restricted access - usally for data members
    int length, width;
  public: //public (default) access specifier : access allowed outside class - usually for member functions
    //define a constructor
    // Rectangle(int l, int w):length(l),width(w){}
    Rectangle (int l, int w){
      length = l;
      width = w;
    }
    int calcArea(){ //No need to pass as members accessible within class
       return length * width;
    }  
    void display(){ //No need to pass variables here
      cout<<"Rectangle area = "<<calcArea()<<endl;
    }
    // void setLength (int l){
    //   length = l;
    // }
    // int getLength (){ // to return the value of length of rectangle
    //    return length;
    // }
    // void setWidth (int w){
    //   width = w;
    // }

};

int main(){
  Rectangle robj(5,6); // declaring object of the class Rectangle
  //robj.length = 5 ;// since private member is not accessible from outside class
  // robj.setLength(5);
  // cout<<"Length of rectangle = "<<robj.getLength()<<endl;
  // robj.setWidth(6);
  robj.display();


  return 0;
}