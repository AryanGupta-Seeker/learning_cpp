// Find GCD(HCF)
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    while(a!=b){
        if(a>b)
        a-=b;
        else
        b-=a;
    }
    cout<<"GCD ="<<a;
    return 0;
}