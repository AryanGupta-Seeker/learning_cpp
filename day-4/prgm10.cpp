// Even or odd
#include<iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int x = 11;
    cout << (isEven(x) ? "Even" : "Odd") << endl;
    return 0;
}
