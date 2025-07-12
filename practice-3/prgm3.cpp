// Pure virtual function
#include<iostream>
using namespace std;
class Aryan{
    public:
    virtual void sound()=0;
};
class Ankit : public Aryan{
    public:
    void sound() override{
        cout<<"I am Ankit ";
    }
};
int main (){
    Ankit a;
    a.sound();
    return 0;
}