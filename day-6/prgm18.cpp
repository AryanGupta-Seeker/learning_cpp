#include<iostream>
using namespace std;
int factorial(int n,int &fact)
{
    fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
}
int main()
{
    int num;
    cout<<"enter a number :";
    cin>>num;
     int result;
        factorial(num, result);
        cout<<"factorial of "<< num <<" is "<<result;
    return 0;
}