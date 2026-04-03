#include<iostream>
using namespace std;

class student{
    private:
    int marks;
    public:
    int roll;
    void setvalues(int a,int b){
        marks=a;
        roll=b;
    }
    
};
int main(){
    student s1;
    s1.marks=10;
    s1.roll=2;
    cout<<s1.marks<<"\n"<<s1.roll<<endl;
    return 0;
}