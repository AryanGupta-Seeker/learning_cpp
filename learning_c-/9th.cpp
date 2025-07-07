// Reverse a number
#include <iostream>
using namespace std;
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
int main() {
    int number = 12345;
    cout << "Reversed number of " << number << " is: " << reverseNumber(number) << endl;
    return 0;
}