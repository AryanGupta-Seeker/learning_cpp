// Inter leave the first and second half of a queue
#include<iostream>
#include<queue>
using namespace std;

void interleave(queue<int>& q) {
    queue<int> firstHalf;
    int n = q.size();
    for (int i = 0; i < n / 2; i++) {
        firstHalf.push(q.front());
        q.pop();
    }

    while (!firstHalf.empty()) {
        q.push(firstHalf.front());
        firstHalf.pop();
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    for (int i = 1; i <= 6; i++) q.push(i);  
    interleave(q);                          

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
