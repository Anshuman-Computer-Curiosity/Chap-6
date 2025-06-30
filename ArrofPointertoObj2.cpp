//Using array of pointers to objects
#include<new>
#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Parameterized constructor
    Student(int i, string n) {
        id = i;
        name = n;
    }
    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
    ~Student(){ //destructor called when obj is destroyed
        cout<<"Destructor called for Student ID = "<<id<<endl;
    }    
};

int main() {
    int n;
    cout<<"Enter number of students = ";
    cin>>n;
    Student** dynamicArr = nullptr;
    try{
     dynamicArr = new Student*[n]; //dynamically allocated array of Student* pointers

    // Student *staticArr[2]; //Static array of pointers to Student - stored on stack, size is fixed at compile time
    for(int i = 0; i < n; i++){
        int id;
        string name;
        cout<<"Enter Id and name for student "<< i + 1 << " : ";
        cin>>id>>name;
        dynamicArr[i] = new Student(id,name);
    }
    // staticArr[0] = new Student(23,"Kapil");
    // staticArr[1] = new Student(45,"Anshu");

    for(int i = 0; i < n; i++){
        //staticArr[i]->display();
        dynamicArr[i]->display();
        //cout<<"Address = "<<staticArr[i]<<endl;
        cout<<"Address = "<<dynamicArr[i]<<endl;
    }
    for(int i = 0; i < n; i++){
        //delete staticArr[i];
        delete dynamicArr[i];
    }
    delete[] dynamicArr;
}
catch(bad_alloc&e){
    cout<<"Mem. allocation failed"<<e.what()<<endl;
}
    return 0;
}