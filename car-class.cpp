#include<iostream>
using namespace std;
class car {
    public:
    string brand;
    int model;
    float price;

    void display(){
        cout<<"Brand:"<< brand << endl;
        cout<<"model:"<< model<< endl;
        cout<<"price:"<< price<<endl;
        }

};
 int main(){
    car c1;
    c1.brand = "BMW";
    c1.model = 2025;
    c1.price = 25000000.00;
    c1.display();
    return 0;
 }
