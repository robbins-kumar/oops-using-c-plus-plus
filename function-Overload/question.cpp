#include<iostream>
using namespace std;
int volume(int side){
    return side*side*side;
}
int volume(int l,int b,int h){
    return l*b*h;
} 
int main(){
    cout<<"Volume of cube is "<< volume(5)<<endl;
    cout<<"Volume of cuboid is " << volume(5,2,10)<<endl;
    return 0;
}