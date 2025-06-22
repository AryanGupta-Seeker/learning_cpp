// Find length of a string
#include <iostream>
using namespace std;
int main() {
    string str = "Hello";
    int len = 0;
    for (char c : str) len++;
    cout << "Length: " << len;
    return 0;
}
