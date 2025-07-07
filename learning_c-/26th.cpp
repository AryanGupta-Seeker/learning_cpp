// Check palindrome
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str="madam",rev=str;
    reverse(rev.begin(),rev.end());
    if(str==rev)
    cout<<"palindrome";
    else
    cout<<"Not a palindrome";
    return 0;
}