#include<iostream>
using namespace std;

class Time{
    public:
        int hours, minutes;
        void input(){
            cout<<"Enter hours: ";
            cin>>hours;
            cout<<"Enter minutes: ";
            cin>>minutes;
        }
        void display(){
            cout<<hours<<" hours and "<<minutes<<" minutes."<<endl;
        }
};
Time addTime(Time t1, Time t2){
    Time result;
    result.hours = t1.hours + t2.hours;
    result.minutes = t1.minutes + t2.minutes;
    if(result.minutes >= 60){
        result.hours += result.minutes/60; //to add 1 hour if minutes are greater than 60
        result.minutes %= 60; // for remaining minutes
    }
    return result; // return a copy (by value)
}

int main(){
    Time time1,time2;
    cout<<"Enter first time :";
    time1.input();
    cout<<"Enter second time :";
    time2.input();
    Time sum = addTime(time1,time2);
    cout<<"Sum of times ";
    sum.display();
    return 0;
}