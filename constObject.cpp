#include<iostream>
using namespace std;

class BidAMount{
    private:
        int amount;
    public:
        BidAMount(int a){ amount = a; }//constructor - to initialize const object
        void reset(){ //non-const member function - allowed for non-const objects
            amount = 0;
        }
        int getValue() const ;//const member func. - safe for const object
        // void updateBid() const{ //const member func. - should not be allowed to modify
        //     amount = 100;
        // }

};
int BidAMount::getValue() const { //const member func. - safe for const object
    return amount;
}

int main(){
    BidAMount b1(500); //non-const object - call ctor
    cout<<" Bid amount (b1) = "<<b1.getValue()<<endl; //non-const object calling const mem. function
    b1.reset(); ////non-const object calling  mem. function
    cout<<" Bid amount after reset (b1) = "<<b1.getValue()<<endl; 
    
    const BidAMount b2(1000); //const object - must be initialized at time of creation
    cout<<" Bid amount (b2) = "<<b2.getValue()<<endl; //const object calling const mem. function
    //b2.reset(); //Compile time Error : const object Not allowed to call non-const mem. function
    //b2.amount = 500; // CE erro : as private also even public - not modifiable

    return 0;
}