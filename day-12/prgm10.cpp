// Remove next element from stack
#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int>& s, int k) {
    if (k == 1) {
        s.pop();
        return;
    }
    int temp = s.top(); s.pop();
    deleteMiddle(s, k - 1);
    s.push(temp);
}

int main() {
    stack<int> s;
    for (int i = 1; i <= 5; i++) s.push(i); 

    int k = (s.size() / 2) + 1;
    deleteMiddle(s, k);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
