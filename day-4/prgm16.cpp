// Count digits
#include<iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while(n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    cout << "Digits: " << countDigits(12345) << endl;
    return 0;
}
