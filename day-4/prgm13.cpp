// Armstrong numbers
#include<iostream>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0;
    while(n > 0) {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }
    return sum == original;
}

int main() {
    cout << (isArmstrong(153) ? "Armstrong" : "Not Armstrong") << endl;
    return 0;
}
