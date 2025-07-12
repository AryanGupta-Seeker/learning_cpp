// Factorial
#include<iostream>
using namespace std;
void factorial(int n,int &result)
{
    result=1;
    for(int i=1;i<=n;i++)
    result *=i;
}
int main()
{
    int fact;
    factorial(5,fact);
    cout<<"factorial :"<<fact;
    return 0;
}