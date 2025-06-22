// Check even or odd
#include <iostream>
using namespace std;

void checkEvenOdd(int n) {
    cout << (n % 2 == 0 ? "Even" : "Odd");
}

int main() {
    checkEvenOdd(8);
    return 0;
}
