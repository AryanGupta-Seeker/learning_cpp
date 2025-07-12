// Overload(==)operator to compare two object[operator overloading]
#include<iostream>
using namespace std;
class Number{
    public:
    int value;
    Number(int v) : value (v){}
    bool operator == (Number n){
      return value == n.value;
    }
};
int main()
{
    Number a(5),b(5);
    if(a==b)
    cout<<"Equal";
    else
     cout<<"Not equal";
     return 0;
}