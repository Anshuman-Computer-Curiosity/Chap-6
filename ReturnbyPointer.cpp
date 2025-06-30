//Program to show return an object by pointer
#include<iostream>
#include<memory> //for making use of smart pointer
using namespace std;

class Box{
    public:
        int length; // data member
        Box(int l = 0):length (l){} //Ctor
        void display(){
            cout<<"Length = "<<length<<endl;
        }
};

// Box* createBox(int size){ //Function returning pointer to object
//     static Box b(size);
//     return &b; // returning address of object
//     //return new Box(size); //Object created dynamically
// }
unique_ptr<Box> createBox(int size){
    return make_unique<Box>(size);
}

int main(){
    // Box* b = createBox(100);
    // b->display();
    unique_ptr<Box> b = createBox(100);
    b->display();

    
    // delete b; // to avoid memory leak

    return 0;
}
