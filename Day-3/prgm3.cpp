// Palindrome number
#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, temp, digit;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (num == rev)
        cout << num << " is a Palindrome.";
    else
        cout << num << " is not a Palindrome.";
    return 0;
}
