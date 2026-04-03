#include<iostream>
using namespace std;
 
class car{
    bool startengine=false;
    public:
    void start(){
        startengine=true;
        cout<<"engine started"<<endl;
    }
    void drive(){
        if(startengine){
            cout<<"you can drive"<<endl;
        }
        else{
            cout<<"cant drive"<<endl;
        }
    }
};
int main(){
    car c;
    //c.start();
    c.drive();
    return 0;
}