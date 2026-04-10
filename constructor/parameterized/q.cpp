#include<iostream>
using namespace std;
class employ{
    private:
    int empid;
    float salary;
    public:
    employ(int a, float b){
        empid=a;
        salary=b;
    };
    void display(){
        cout<<empid<<endl;
        cout<<salary<<endl;
    };

};
int main(){
    employ e1(1012,1200.50);
    employ e2(1013,1200.60);
    e1.display();
    e2.display();
    return 0;
}