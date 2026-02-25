#include<iostream>
using namespace std;

class rectangle {
    public:
    float length;
    float width;
    float area;
     void calculateArea(){
         area = length*width;
        //cout<<"area:"<<

     }
     void displayDimensions (){
        cout<<"lenght:"<<length<<endl;
        cout<<"width:"<<width<<endl;
        cout<<"Area:"<<area<<endl;
     }
};
int main(){
    rectangle r1;
    r1.length=5;
    r1.width=5;
    r1.calculateArea();
    r1.displayDimensions();
    return 0;
}