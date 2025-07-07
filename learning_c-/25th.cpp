// Reverse a string
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str="Hello";
    reverse(str.begin(),str.end());
    cout<<"Reversed :"<<str;
    return 0;
}