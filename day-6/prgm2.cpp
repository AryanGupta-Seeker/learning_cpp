// prime number using pass by value
#include<iostream>
using namespace std;
bool checkprime(int n)
{
    if(n<2)
    return false;
    for(int i=2;i<n;i++){
    if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    bool prime = checkprime(2);
    if(prime)
    cout<<"prime";
    else
    cout<<"not prime";
    return 0;
}