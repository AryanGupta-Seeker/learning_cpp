// Armstrong number using pass by reference
// Armstrong number using pass by reference
#include<iostream>
#include<cmath>  // Required for pow()
using namespace std;

int armstrong(int &n)
{
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;

    // Count number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Reset temp to original number
    temp = n;

    // Calculate sum of digits raised to power of number of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (armstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
