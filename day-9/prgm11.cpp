// Enqueue operation
#include<iostream>
using namespace std;
int main()
{
    int queue[5],front=0,rear=-1;
    queue[++rear]=10;
    queue[++rear]=20;
    for(int i=front;i<=rear;i++)
    cout<<queue[i]<<" ";
    return 0;
}