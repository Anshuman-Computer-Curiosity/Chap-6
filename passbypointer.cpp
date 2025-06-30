//Passing object by Pointer
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

void changeLength(Box *b){
    b->length = 200;
    cout<<"Inside function"<<endl;
    b->display();
}

int main(){
    //Box b(100); //Creating an object of Box class
    Box* b = new Box(100); //Creating dynamic object
    cout<<"Before function call"<<endl;
    b->display();
    changeLength(b); //Passing address of object
    cout<<"After function call"<<endl;
    b->display();
    delete b; //To avoid memory leak
    return 0;
}