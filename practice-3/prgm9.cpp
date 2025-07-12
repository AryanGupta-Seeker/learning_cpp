//  Parameterized Constructor
#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(int a){
        cout<<"Parameterized Parent Constructor :"<<a<<endl;
    }
};
class Child : public Parent{
    public:
    Child(int a,int b) : Parent(a){
        cout<<"Parameterized Child Constructor :"<<b;
    }
};
int main(){
    Child c(10,20);
    return 0;
}