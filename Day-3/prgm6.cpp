// Armstrong number
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0, temp, digit;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    return 0;
}
