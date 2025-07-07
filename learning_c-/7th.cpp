// calculate power
#include <iostream>
using namespace std;
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
int main() {
    int base = 2, exp = 3;
    cout << base << " raised to the power of " << exp << " is: " << power(base, exp) << endl;
    return 0;
}