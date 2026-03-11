#include<iostream>
using namespace std;
int multiply(int a,int b){
    return a*b;
}
double multiply(double a,int b,int c){
    return a*b*c;
}
int main(){
    cout<<multiply(5,10)<<endl;
    cout<<multiply(5.2,2,4)<<endl;
    cout<<"this is function\n overloading"<<endl;
    return 0;
}