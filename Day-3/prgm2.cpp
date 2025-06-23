// Check prime number
#include<iostream>
using namespace std;
int main()
{
    int i,n,flag=0;
    cout<<"Enter a number:";
    cin>>n;
    if(n<=1)
    flag=1;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<n<<" is a prime number.";
    else
        cout<<n<<" is not a prime number.";
    return 0;
}