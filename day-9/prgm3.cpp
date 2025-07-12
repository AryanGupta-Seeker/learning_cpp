#include<iostream>
using namespace std;
int stack[100],top=2;
int pop(){
    if(top>=0)
    return stack[top--];
    else
    cout<<"stack underflow";
    return -1;
}
int main()
{
    stack[0]=10;
    stack[1]=20;
    stack[2]=30;
    cout<<"popped :"<<pop();
    return 0;
}