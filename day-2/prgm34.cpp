// Reverse a string using manual loop
#include <iostream>
using namespace std;
int main() {
    string str = "hello", rev = "";
    for (int i = str.length() - 1; i >= 0; i--)
        rev += str[i];
    cout << "Reversed: " << rev;
    return 0;
}
