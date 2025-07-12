#include<iostream>
using namespace std;
int stack[100];
int top=2;
int peek()
{
    if(top>=0)
    return stack[top];
    else
    cout<<"empty";
    return -1;
}
int main()
{
    stack[0]=10;
    stack[1]=20;
    stack[2]=30;
    cout<<peek();
    return 0;
}
