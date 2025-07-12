// Default Constructor
#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"Default Parent Constructor"<<endl;
    }
};
class Child : public Parent{
    public:
        Child(){
            cout<<"Default Child Constructor";
        }
};
int main()
{
    Child c;
    return 0;
}