#include<iostream>
using namespace std;
int main()
{
    int i,n,flag=0;
    cout<<"Enter a number :";
    cin>>n;
    if(n<=1)
    flag =1 ;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }}
        if(flag==0)
        cout<<"prime no.";
        else
        cout<<"not a prime no.";
        return 0;
}