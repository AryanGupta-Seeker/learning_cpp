// stack using STL
#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(5);
    s.push(10);
    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "Top after pop: " << s.top() << endl;
    return 0;
}
