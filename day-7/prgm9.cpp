// Plindrome
#include<iostream>
using namespace std;
bool isPalindrome(int &n)
{
    int original = n;
    int reversed = 0;
    while(n>0)
    {
        int digit=n%10;
        reversed = reversed*10+digit;
        n=n/10;
    }
    n=original;
    return original == reversed;
}
int main()
{
    int number;
    cout<<"Enter a numnber :";
    cin>>number;
    if(isPalindrome(number)){
        cout<<"Palindrome";
    }
        else
        {
        cout<<"not palindrome";
        }
    
    return 0;
}
