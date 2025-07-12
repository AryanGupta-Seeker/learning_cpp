// Basic virtual function(Runtime polymorphism)
#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"Animal sound ";
    }
};
class Dog : public Animal{
    public:
    void sound() override{
        cout<<"Dog barks";
    }
};
int main()
{
    Animal *a;
    Dog d;
    a = &d;
    a->sound();
    return 0;
}