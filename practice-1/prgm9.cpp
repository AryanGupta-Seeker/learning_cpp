// Function overriding with base pointer[Runtime polymorphism]
#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void greet(){
        cout<<"hello from parent";
    }
};
class Child : public Parent{
    public:
    void greet() override{
        cout<<"Hello from child";
    }
};
int main()
{
    Parent *p;
    Child c;
    p=&c;
    p->greet();
    return 0;
}