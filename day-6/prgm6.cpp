// factorial using pass by reference
#include <iostream>
using namespace std;
void factorial(int n,int &fact)
{
    fact =1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
}
int main()
{
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    if(num<0){
        cout<<"Not possible"<<endl;
    }
    else{
        int result;
        factorial(num, result);
        cout<<"factorial of "<< num <<" is "<<result;
    }
}