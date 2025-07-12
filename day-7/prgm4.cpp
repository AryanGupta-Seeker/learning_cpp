// Change string
#include<iostream>
using namespace std;
void changename(string &name)
{
    name = "Aryan";
}
int main()
{
    string name = "Gupta";
    changename(name);
    cout<<"Changed name :"<<name;
    return 0;
}