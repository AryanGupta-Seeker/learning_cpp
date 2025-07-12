// Display stack elements
#include<iostream>
using namespace std;
int stack[3]={10,20,30};
int top=2;
int main()
{
    for(int i=0;i<=top;i++)
    cout<<stack[i]<<" ";
    return 0;
}