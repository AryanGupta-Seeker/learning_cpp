#include<iostream>
using namespace std;
int prime(int n)
{
    if(n<2)
    return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    cout<<prime(5);
    return 0;
}