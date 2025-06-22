// Maximum of two number(Using if-else)
#include <iostream>
using namespace std;

int maxNum(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main() {
    cout << "Max: " << maxNum(3, 7);
    return 0;
}
