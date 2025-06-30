#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length, width;
    public:
        Rectangle(){
            length = width = 0;
            cout<<"Default/0-parameter ctor called"<<endl;
        }
        Rectangle(int l,int w){
            length = l;
            width = w;
            cout<<"Parameterized constructor called"<<endl;
        }
        int calcArea(){
            return length*width;
        }
        ~Rectangle(){
            cout<<"Destructor called for object"<<endl;
        }
};

int main(){
    Rectangle *r1; //pointer to Rectangle class
    Rectangle *r2; //pointer to Rectangle class
   try{
    r1 = new Rectangle; //Creating an object dynamically on heap and storing its addr. in pointer to Rectangle class r1
    //Default ctor will be called
    cout<<"Area (r1) = "<<r1->calcArea()<<endl;

   // cout<<"Area (r2) = "<<(new Rectangle(5,8))->calcArea()<<endl; //calls parameterized ctor
    
    r2 = new Rectangle(5,8); //Creating an object dynamically on heap and storing its addr. in pointer to Rectangle class r1
    //Default ctor will be called
    cout<<"Area (r2) = "<<r2->calcArea()<<endl;
   }
   catch(bad_alloc &e){
    cout<<"Memory allocation failed"<<e.what()<<endl;
    return 1;
   }

    delete r1; //calls destructor
    delete r2;

    return 0;
}