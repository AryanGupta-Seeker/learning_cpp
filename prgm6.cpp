// stack push , pop , peek example
#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(100);
    s.push(200);
    cout << "Peek: " << s.top() << endl;
    s.pop();
    cout << "After Pop, Peek: " << s.top() << endl;
    return 0;
}
