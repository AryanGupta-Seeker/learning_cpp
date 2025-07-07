#include<iostream>
using namespace std;
int prime(int &n)
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
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout<<prime(num);
    return 0;
}