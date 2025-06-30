// Fibonacci serires
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) return n; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Negative numbers are not possible." << endl;
    } else {
        cout << "Fibonacci series up to " << num << ": ";
        for (int i = 0; i < num; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }
    return 0;
}