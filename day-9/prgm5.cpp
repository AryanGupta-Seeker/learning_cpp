// Check if stack is empty
#include<iostream>
using namespace std;
int top=-1;
bool isEmpty(){
    return top ==-1;
}
int main()
{
    cout<<(isEmpty() ? "Empty" : "Not empty");
    return 0;
}