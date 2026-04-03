#include<iostream>
using namespace std;

class encap{
    private:
    string name;
    public:
    int roll;
    float marks;
    public:
    void setdetails(string a,int b,float c){
        name=a;
        roll=b;
        marks=c;

    }
    void showdetails(){
        cout<<name<<"\n"<<roll<<"\n"<<marks<<endl;
    }
};
int main(){
    encap student;
    student.setdetails("Robbins",43,20);
    student.showdetails();
    return 0;
}