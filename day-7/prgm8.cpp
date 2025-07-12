// Prime number
#include<iostream>
using namespace std;
bool checkprime(int &n)
{
    if(n<=1)
    return 0;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    return count ==2;
}
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(num<2)
        cout<<"not valid";
        else{
            if(checkprime(num))
            {
                cout<<num<<"prime";
            }
            else
            cout<<"not prime";
        }
        return 0;
}