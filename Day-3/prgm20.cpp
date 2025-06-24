// Print all factors of a number 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    cout<<"Factor of "<<n<<"are :";
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<< " ";
    }
    return 0;
}