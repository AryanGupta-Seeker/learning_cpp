// Reverese string
#include<iostream>
#include<algorithm>
using namespace std;
void reverseString(string &s)
{
    reverse(s.begin(),s.end());
}
int main()
{
    string str="hello";
    reverseString(str);
    cout<<"Reversed :"<<str;
    return 0;
}