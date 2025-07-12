// Shape example[Runtime polymorphism]
#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area(){
        cout<<"Area of Shape ";
    }
};
class Circle : public Shape{
    public:
    void area() override{
        cout<<"Area of circle";
    }
};
int main()
{
    Shape *s;
    Circle c;
    s=&c;
    s->area();
    return 0;
}