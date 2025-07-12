// Base class pointer/reference(Runtime time polymorphism)
#include<iostream>
using namespace std;
class Father{
   public:
   virtual void show(){
    cout<<"Father class"<<endl;
   }
};
class Ankit : public Father{
  public:
     void show() override {
        cout<<"Ankit class"<<endl;
     }
};
class Vinay : public Father {
    public:
    void show() override {
        cout<<"Vinay class "<<endl;
    }
};
int main()
{
    Father* ptr;
    Ankit a;
    Vinay v;

    ptr = &a;
    ptr->show();

    ptr= &v;
    ptr->show();

    return 0;
}