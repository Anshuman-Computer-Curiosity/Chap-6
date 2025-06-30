#include<iostream>
using namespace std;
class GlobalClass{
    private:
        int data; //datamember
    public:
        GlobalClass(int x): data(x){} //ctor
        int getData(){
            return data;
        }
};
int main(){
    GlobalClass obj(10);
    cout<<"Value = "<<obj.getData()<<endl;
    return 0;
}