// Swap two numbers
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);
    cout << "x: " << x << ", y: " << y;
    return 0;
}
