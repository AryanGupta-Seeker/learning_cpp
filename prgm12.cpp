// Queue using STL
#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(5);
    q.push(10);
    cout << "Front: " << q.front() << endl;
    q.pop();
    cout << "After pop, front: " << q.front() << endl;
    return 0;
}
