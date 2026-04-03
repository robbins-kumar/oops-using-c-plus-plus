#include<iostream>
using namespace std;
class student{
    public:
    int marks;
};
int main(){
    student s1;
    s1.marks = 10;
    cout<<s1.marks<<endl;
    return 0;
}