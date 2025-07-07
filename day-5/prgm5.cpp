// Factorial of a number
#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    fact*=i;
    return fact;
}
int main()
{
    cout<<"factorial is :"<<factorial(6);
    return 0;
}