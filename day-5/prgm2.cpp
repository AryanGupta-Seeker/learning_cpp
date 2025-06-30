// Swap two number
#include<iostream>
using namespace std;
int swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"Befor swap : a ="<<a<<" b ="<<b<<endl;
}
int main()
{
    int x=3,y=4;
    swap(x,y);
    cout<<"After swap : x = "<<x<<" y ="<<y;
    return 0;
}