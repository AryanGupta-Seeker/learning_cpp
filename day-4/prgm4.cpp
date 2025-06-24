// Square root
#include<iostream>
#include<cmath>
using namespace std;
double squareRoot(double n){
    return sqrt(n);
}
int main(){
    double n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"square root is :"<<squareRoot(n);
    return 0;
}