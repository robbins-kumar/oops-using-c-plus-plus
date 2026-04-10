#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    public:
    student(int a,string b){
        rollno=a;
        name=b;
    };
    void display(){
        cout<<rollno<<endl;
        cout<<name<<endl;
    };
};
int main(){
    student s1(10,"robbins");
    s1.display();
    return 0;
}