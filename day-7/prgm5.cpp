// Sum of array elements
#include<iostream>
using namespace std;
void sumArray(int arr[],int size, int &num)
{
    int sum=0;
    for(int i=0;i<size;i++)
    sum+=arr[i];
}
int main()
{
    int a[]={1,2,3,4,5};
    int sum;
    sumArray(a,4,sum);
    cout<<"sum ="<<sum;
    return 0;
}