// Armstrong number using pass by value
#include<iostream>
using namespace std;
bool isarmstrong(int n)
{
    int original = n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit; 
        n /= 10;
    }
    return original == sum;
}
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(num < 0)
    {
        cout<<"Negative numbers are not p[ossible"<<endl;
    }
    else
    {
        if(isarmstrong(num))
        {
            cout<<num<<" is an Armstrong number."<<endl;
        }
        else
        {
            cout<<num<<" is not an Armstrong number."<<endl;
        }
    }
    return 0;
}