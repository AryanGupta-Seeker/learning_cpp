// Input and output a string
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Using getline to read the entire line including spaces
    cout << "Hello !" << str << endl; // Output the string
    return 0;
}