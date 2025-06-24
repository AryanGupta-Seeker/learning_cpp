// Subtract two numbers
#include<iostream>
using namespace std;
int subtract(int a,int b)
{
    int c=a-b;
    return c;
}

int main(){
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    cout<<"Subtraction is :"<<subtract(a,b)<<endl;
    return 0;
}