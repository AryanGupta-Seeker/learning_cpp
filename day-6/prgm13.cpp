// linear search
#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter no. of elements :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cin>>key;
    cout<<"Enter the element yoyu want to search :";
    cout<<linearsearch(arr,n,key)<<endl;
    return 0;
}