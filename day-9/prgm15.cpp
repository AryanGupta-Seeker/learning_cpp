// Dequeue using stl queue
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.pop();
    cout<<q.front();
    return 0;
}