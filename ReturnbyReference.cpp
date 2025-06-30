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

Box globalBox(100); //creating global object

Box& getGlobalBox(){ //Function returning reference
    return globalBox; //Returning the create object
}

int main(){
    Box& b = getGlobalBox(); //call to function that return reference to gloabl object
    b.display();
    b.length = 200;
    b.display();
    return 0;
}