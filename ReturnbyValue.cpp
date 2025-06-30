#include<iostream>
using namespace std;
class Box{
    public:
        int length; // data member
        Box(int l = 0):length (l){} //Ctor
        void display(){
            cout<<"Length = "<<length<<endl;
        }
};

Box createBox(){
    Box b(100);//Create an object of Box class
    return b; //Returning the create object
}

int main(){
    createBox().display(); //chained methods
}