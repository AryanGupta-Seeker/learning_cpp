//Push using stl stack 
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    cout<<s.top();
    return 0;
}
