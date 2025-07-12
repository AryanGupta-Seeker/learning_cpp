// Evaluate post fix expression
#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

int evaluate(string exp) {
    stack<int> s;
    for (char ch : exp) {
        if (isdigit(ch)) s.push(ch - '0');
        else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            switch (ch) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
    }
    return s.top();
}

int main() {
    string exp = "231*+9-4";
    cout << "Result: " << evaluate(exp) << endl;
    return 0;
}
