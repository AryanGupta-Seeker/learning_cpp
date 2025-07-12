// Vehicle example[Runtime polymorphism]
#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void start(){
        cout<<"Starting Vehicle";
    }
};
class Bike : public Vehicle{
    public:
    void start() override{
        cout<<"Bike started";
    }
};
int main ()
{
    Vehicle *v;
    Bike b;
    v=&b;
    v->start();
    return 0;
}