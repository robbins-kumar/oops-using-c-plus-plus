#include<iostream>
using namespace std;

class shapes{
    protected:
    void draw(){
        cout<<"the shape is drawn"<<endl;
    }
};
class circle:shapes{
    public:
    void draw(){
        cout<<"the circle id drawn"<<endl;
    }
};
class rect:shapes{
    public:
    void draw(){
        cout<<"the rect is drawn"<<endl;
    }
};
int main(){
    circle c1;
    c1.draw();
    rect r1;
    r1.draw();
    return 0;
}