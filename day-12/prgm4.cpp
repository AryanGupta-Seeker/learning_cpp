// Check for balanced parenthesis
#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string exp) {
    stack<char> s;
    for (char ch : exp) {
        if (ch == '(') s.push(ch);
        else if (ch == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string expr = "(())())";
    cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
