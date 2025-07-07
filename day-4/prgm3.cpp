// Square of a number
#include<iostream>
using namespace std;
int square(int n)
{
    return n*n;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"Square is :"<<square(n);
    return 0;
}