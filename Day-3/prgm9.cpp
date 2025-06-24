// swap two number using third varaible
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swap :a="<<a<<" , b ="<<b;
    return 0;
}