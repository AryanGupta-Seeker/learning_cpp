// Dequeue operation
#include<iostream>
using namespace std;
int main()
{
    int queue[5]={10,20},front=0,rear=1;
    front++;
    for(int i=front;i<=rear;i++)
    cout<<queue[i];
    return 0;
}