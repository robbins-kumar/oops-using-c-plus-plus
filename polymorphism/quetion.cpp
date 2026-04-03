#include<iostream>
using namespace std;
 class billpayment{
    public:
    float pay;
    protected:
    void show(){
        cout<<"this is the payment"<<pay<<endl;
    }
 };
 class mobile:billpayment{
    public:
        void show(){
            cout<<"mobile recharge payment is "<<pay<<endl;
        }
 };
 class electricity:billpayment{
    public:
    void show(){
        cout<<"the electricity bill is "<<pay<<endl;
    }
 };
 int main(){
    mobile m1;
    m1.pay=100;
    m1.show();
    electricity e1;
    e1.pay=200;
    e1.show();
    return 0;
 }//not good code