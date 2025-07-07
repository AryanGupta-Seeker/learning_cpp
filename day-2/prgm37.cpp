// Convert to uppercase(Manual method)
#include <iostream>
using namespace std;
int main() {
    string str = "hello";
    for (char &c : str)
        if (c >= 'a' && c <= 'z') c = c - 32;
    cout << "Uppercase: " << str;
    return 0;
}
