// Palindrome using pass by reference 
#include<iostream>
using namespace std;
bool palindrome(int &n)
{
    int num = n;
    int temp=n;
    int rev = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    return num == rev;
}
int main()
{
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    if(num<0)
    cout<<"not valid";
    else
    {
        if(palindrome(num))
           cout<<num<<"palindrome";
    
          else
           cout<<num<<"not palindrome";
    }
    return 0;
}
