// Check palindrome using two pointer technique
#include <iostream>
using namespace std;
int main() {
    string str = "madam";
    bool isPal = true;
    for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPal = false;
            break;
        }
    }
    cout << (isPal ? "Palindrome" : "Not a palindrome");
    return 0;
}
