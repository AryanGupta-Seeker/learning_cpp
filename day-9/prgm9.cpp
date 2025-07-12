// Size of stack
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    cout<<s.size();
    return 0;
}