// Constructor overloading with inheritance
#include<iostream>
using namespace std;
class Parent{
    public:
    Parent() {
        cout<<"Default Parent Constructor"<<endl;
    } 
    Parent(int a){
        cout<<"Parameterized Parent Constructor : "<<a<<endl;
    }
};
class Child : public Parent{
     public:
     Child()
     {
        cout<<"Default Child constructor"<<endl;
     }
     Child(int a,int b) : Parent(a){
        cout<<"Parameterized Child Constructor : "<<b<<endl;
     } 
};
int main()
{
    Child d1;
    Child d2(10,30);
    return 0;
}