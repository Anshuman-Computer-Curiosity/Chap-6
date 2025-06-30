#include <iostream>
using namespace std;

class Student {
    int id;
public:
    Student(int x) : id(x) {
        cout << "Student " << id << " created.\n";
    }
    void show() {
        cout << "ID: " << id << endl;
    }
    ~Student() {
        cout << "Student " << id << " destroyed.\n";
    }
};

int main() {
    Student* s[3]; // Array of 3 pointers to Student

    // Dynamically create objects
    s[0] = new Student(101);
    s[1] = new Student(102);
    s[2] = new Student(103);

    // Use them
    for (int i = 0; i < 3; i++) {
        s[i]->show();
    }

    // Delete them
    for (int i = 0; i < 3; i++) {
        delete s[i];
    }

    return 0;
}