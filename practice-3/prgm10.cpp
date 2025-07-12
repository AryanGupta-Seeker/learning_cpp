// Copy Constructor
#include<iostream>
using namespace std;
class Parent{
    public:
    Parent()  {}
       Parent(const Parent& p){
        cout<<"Copy Parent Constructor"<<endl;
       }
};
class Child : public Parent{
    public:
    Child()  {}
    Child(const Child & c) : Parent(c){
        cout<<"Copy Child constructor";
    }
};
int main()
{
    Child a1;
    Child a2=a1;
    return 0; 
}