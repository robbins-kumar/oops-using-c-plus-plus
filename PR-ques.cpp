#include<iostream>
using namespace std;
class student {
    public:
    int rollNo;
    string name;
    float marks;
    void display(){
        cout << "Roll No:" << rollNo << endl;
        cout << "name:" << name << endl;
        cout << "marks:" << marks << endl;
    };
};
    int main(){
        student s1;
        s1.rollNo = 1;
        s1.name = "John";
        s1.marks = 85.5;
        s1.display();
        student s2;
        s2.rollNo = 2;
        s2.name = "robbins";
        s2.marks = 25.55;
        s2.display();
        return 0;
    }




