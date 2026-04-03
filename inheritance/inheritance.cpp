#include<iostream>
using namespace std;
 class add{
    public:
    int  sum(int a, int b){
        printf("%d\n",a+b);
        return 0;
    }
 };
 class calculate:public add{
    public:
    int  diff(int x,int y){
        printf("%d\n",x-y);
        return 0;
    }
 };
 int main(){
    calculate first;
    first.sum(10,20);
    first.diff(10,20);
    return 0;
 }