// palindrome
#include <iostream>
using namespace std;
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a Palindrome." << endl;
    } else {
        cout << number << " is not a Palindrome." << endl;
    }

    return 0;
}

