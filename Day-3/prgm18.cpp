// Calculator using switch case
#include<iostream>
using namespace std;
int main()
{
    char op;
    float a,b;
    cout<<"enter operator (+,-,*,/) :";
    cin>>op;
    cout<<" Enter two operand :";
    cin>>a>>b;
    switch(op){
        case '+' : cout<<"Result ="<<a+b; break;
        case '-' : cout<<"Result ="<<a-b; break;
        case '*' : cout<<"Result ="<<a*b; break;
        case '/' : cout<<"Result ="<<a/b; break;
        default : cout<< "Invalid operator";
    }
    return 0;
}