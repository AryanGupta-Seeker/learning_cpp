// GCD of two numbers
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    cout << "GCD: " << gcd(12, 18) << endl;
    return 0;
}
