// Sum of elements in a queue
#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10); q.push(20); q.push(30);
    int sum = 0;
    while (!q.empty()) {
        sum += q.front();
        q.pop();
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
