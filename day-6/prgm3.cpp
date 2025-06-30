//palindrome using pass by value
#include<iostream>
using namespace std;
bool palindrome(int n)
{
    int num=n;
    int rev=0;
    while(n>0)
    {
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return num == rev;
}
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(num<0)
    {
        cout<<"does not exist";
    }
    else{
        if(palindrome(num))
        {
            cout<<num<<" palindrome number."<<endl;
        }
        else
        {
            cout<<num<<" not a palindrome number."<<endl;
        }
    }
}