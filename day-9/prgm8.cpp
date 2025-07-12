// pop usaing stl stack
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.pop();
    cout<<s.top();
    return 0;
}