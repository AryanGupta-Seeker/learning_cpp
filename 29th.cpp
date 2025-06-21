// Find substring
#include <iostream>
using namespace std;
int main()
{
    string str ="Programming";
    string sub ="gram";
    if(str.find(sub)!=string ::npos)
    cout<<"String found";
    else
    cout<<"String not found";
    return 0;
}