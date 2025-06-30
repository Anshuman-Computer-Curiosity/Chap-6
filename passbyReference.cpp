//Passing object by reference
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

void changeLength(Box& b){ //Add & for reference variable
    b.length = 200; //Chaging inside function
    cout<<"Inside function"<<endl;
    b.display();
}


int main(){
    Box b(100); //Creating an object of Box class
    cout<<"Before function call"<<endl;
    b.display();
    changeLength(b); //Passing reference
    cout<<"After function call"<<endl;
    b.display(); //Object's b length = 200
    return 0;
}