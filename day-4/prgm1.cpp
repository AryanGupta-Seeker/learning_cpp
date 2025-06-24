// sum of two numbers
#include<iostream>
using namespace std;
int sum(int a,int b){
    int c = a+b;
    return c;
}
int main(){
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    cout<<"sum is :"<<sum(a,b)<<endl;
    return 0;
}