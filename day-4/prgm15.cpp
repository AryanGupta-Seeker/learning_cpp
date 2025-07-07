// Fibonacci series
#include<iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for(int i = 2; i < n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main() {
    printFibonacci(7);
    return 0;
}
