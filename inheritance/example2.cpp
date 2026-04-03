#include<iostream>
using namespace std;
 class father{
    protected:
    string surname="shroff";
 };
  
 class son1:father{
    string name="james";
public:
   void show(){
       cout<<name<<" "<<surname<<endl;
   }

 };
 class son2:father{
    string name="parker";
    public:
    void disp(){
        cout<<name<<" "<<surname<<endl;
    }
 };
 int main(){
    son1 s1;
    s1.show();
    son2 s2;
    s2.disp();
    return 0;
 }