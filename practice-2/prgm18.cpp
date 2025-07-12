// Pure virtual function
#include<iostream>
using namespace std;
class Car{
    public:
    virtual void brand() = 0;
};
class Alto : public Car {
    public:
    void brand() override{
        cout<<"Alto"<<endl;
    }
};
class Nano : public Car{
    public:
    void brand() override{
        cout<<"Nano";
    }
};
int main()
{
    Alto a;
    Nano n;
    a.brand();
    n.brand();
    return 0;
}