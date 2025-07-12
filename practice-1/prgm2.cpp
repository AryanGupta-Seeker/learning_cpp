// Compile time polymorphism(Function overloading overloading)=Add two numbers
#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
double add(double a,double b){
    return a+b;
}
int main()
{
    cout<<add(2,3)<<endl;
    cout<<add(2.5,3.7);
    return 0;
}

