// Runtime polymorphism using virtual function
#include<iostream>
using namespace std;
class Father{
   public:
    virtual void show(){
        cout<<"Father class "<<endl;
    }
};
class Child : public Father{
    public:
     void show() override{
        cout<<"child class "<<endl;
     }
};
int main(){
    Father* ptr;
    Child d;
    ptr =&d;
    ptr->show();
    return 0;
}