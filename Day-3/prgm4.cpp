// Fibonacci series
#include <iostream>
using namespace std;
int main(){
    int n,t1 = 0 ,t2= 1 ,next;
    cout<<"Enter the number of terms :";
    cin>>n;

    for(int i = 1; i<= n; ++i){
        cout<<t1<< " ";
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return 0;
}