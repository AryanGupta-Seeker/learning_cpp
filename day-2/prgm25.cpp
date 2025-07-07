// Factorial using recursion
#include <iostream>
using namespace std;

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    cout << "Factorial: " << factorial(5);
    return 0;
}
