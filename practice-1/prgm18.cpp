// static keyword
#include<iostream>
using namespace std;
void value(){
    static int num =0;
    num++;
    cout<<num;
};
int main()
{
    value();
    return 0;
}