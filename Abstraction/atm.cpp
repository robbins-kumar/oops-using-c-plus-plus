#include<iostream>
using namespace std;
 class atm{
    private:
    float balance=0;
    public:
    void deposit(float amount){
        balance+=amount;
    }
    void showbalance(){
        cout<<"balance is"<<balance<<endl;
    }
    void withdraw(float amountdraw){
        balance-=amountdraw; 
    }

 };
 int main(){
    atm a1;
    a1.deposit(100);
    a1.withdraw(50);
    a1.showbalance();
    return 0;
 }