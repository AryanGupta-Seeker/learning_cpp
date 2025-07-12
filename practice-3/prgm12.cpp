// Dynamic constructor with inheritance
#include<iostream>
using namespace std;
class Parent{
    protected:
       int* p;
       public:
       Parent(int val){
        p= new int(val);
        cout<<"Base dynamic constructor : "<<*p<<endl;
       }
};
class Child : public Parent{
    public:
    Child(int x,int y) : Parent(x){
        cout<<"Child Value : "<<y<<endl;
    }
};
int main(){
    Child c(100,200);
    return 0;
}