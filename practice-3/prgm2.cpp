// Dynamic dispatch
#include<iostream>
using namespace std;
class Father{
    public:
     virtual void show()
     {
        cout<<"here is Father";
     }
};
class Ankit : public Father{
    public:
    void show() override{
        cout<<"Here is Ankit";
    }
};
int main()
{
    Father* f;
    Ankit a;
    f=&a;
    f->show();
    return 0;
}