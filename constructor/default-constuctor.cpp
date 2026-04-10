#include<iostream>
using namespace std;
class student{
    private:
    int roll_no;
    string name;
    public:
    student(){ //default constuctor
         roll_no=10;
         name="robin";
    };
    void display(){
        cout<<roll_no<<endl;
        cout<<name<<endl;
    };
};
int main(){
    student s1;
    s1.display();
    return 0;
}