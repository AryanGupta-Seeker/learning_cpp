// Single inheritance
#include<iostream>
using namespace std;
class Family{
    public:
    void father(){
        cout<<"This is Father "<<endl;
    }
};
class Child : public Family{
    public:
    void children(){
        cout<<"This is children";
    }
};
int main()
{
    Child obj;
    obj.father();
    obj.children();
    return 0;
}