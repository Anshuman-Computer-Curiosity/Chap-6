#include<iostream>
using namespace std;

int main(){
    class {
        public:
            void hello(){
                cout<<"In annaonymous class"<<endl;
            }
        }obj;
    
    obj.hello();
    return 0;

}