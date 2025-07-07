// Check even or add
#include<iostream>
using namespace std;
int check(int n)
{
    if(n%2==0)
    cout<<n<<" is even";
    else 
    cout<<n<<" is odd";
}
int main()
{
    check(8);
    return 0;
}