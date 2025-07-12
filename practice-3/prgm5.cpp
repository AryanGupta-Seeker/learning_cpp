// Public access specifier in inheritance
#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"Here is parent class";
    }
};
class Child : public Parent{
    
};
int main()
{
    Child c;
    c.show();
    return 0;
}