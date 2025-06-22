// Compare two string character by character
#include <iostream>
using namespace std;
int main() {
    string a = "apple", b = "banana";
    int i = 0;
    while (i < a.length() && i < b.length()) {
        if (a[i] != b[i]) break;
        i++;
    }
    if (a == b) cout << "Equal";
    else if (a[i] > b[i]) cout << "a is greater";
    else cout << "b is greater";
    return 0;
}
