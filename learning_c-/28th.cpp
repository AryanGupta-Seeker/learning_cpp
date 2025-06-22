// Convert to uppercase
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string str = "hello world";
    for (char &c : str) {
        c = toupper(c); 
    }
    cout << "Uppercase: " << str << endl; 
    return 0;
}