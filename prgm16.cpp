// Display elements of a queue
#include<iostream>
#include<queue>
using namespace std;

void display(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(10); q.push(20); q.push(30);
    display(q);
    return 0;
}
