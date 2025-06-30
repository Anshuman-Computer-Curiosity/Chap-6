#include<iostream>
using namespace std;
class Demo{
    private: 
        int value;
    public:
        Demo(int v):value(v){
            cout<<"In constructor call, value = "<<value<<endl;
        }
        void show() const{
            cout<<"Anonymous object, value = "<< value << endl;
        }
        ~Demo(){
            cout<<"In destructor call " << endl;
        }
};
Demo getDemo(int x){
    return Demo(x);
}

int main(){
    Demo(5);
    Demo(10).show();
    getDemo(15).show();
    return 0;
}