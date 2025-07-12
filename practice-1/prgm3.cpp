// Print message(Function overloading)
#include<iostream>
using namespace std;
void print(int x)
{
    cout<<"Integer :"<<x<<endl;
}
void print(string s)
{
    cout<<"String :"<<s<<endl;
}
int  main()
{
    print(10);
    print("Hello");
    return 0;
}