// Enqueue using stl queue
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    cout<<q.front();
    return 0;
}