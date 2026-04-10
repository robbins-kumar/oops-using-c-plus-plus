#include<iostream>
using namespace std;
 class rectangle{
    private:
    int length;
    int width;
    public:
    rectangle(){
        length=10;
        width=20;
        cout<<"default constructor is called"<<endl;
    };
    void display(){
        cout<<"lenght="<<length<<endl;
        cout<<"width="<<width<<endl;
    };
 };
 int main(){
    rectangle r1;
    r1.display();
    return 0;
 }