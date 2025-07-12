#include<iostream>
using namespace std;
int stack[100];
int top =-1;
void push(int val){
    if(top<99)
    stack[++top]=val;
    else
    cout<<"stack overflow";
} 
int main()
{
     push(10);
     push(20);
     push(30);
     for(int i=0;i<=top;i++)
     cout<<stack[i]<< " ";
     return 0;
}