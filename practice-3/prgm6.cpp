// Protected access specifier in inheritance
#include<iostream>
using namespace std;
class Parent{
  public:
   void show(){
    cout<<"here is parenr class";
   }
};
class Child : protected Parent{
   public:
    void display(){
        show();
    }
};
int main()
{
    Child c;
    c.display();
    return 0;
}