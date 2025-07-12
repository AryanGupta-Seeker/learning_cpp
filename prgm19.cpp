// Queue of strings
#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
    queue<string> q;
    q.push("apple");
    q.push("banana");
    q.push("cherry");

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
