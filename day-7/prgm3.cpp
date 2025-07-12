// Increment a number
#include<iostream>
using namespace std;
void increment(int &n)
{
    n++;
}
int main()
{
    int num=5;
    increment(num);
    cout<<"incremented value :"<<num<<endl;
    return 0;
}