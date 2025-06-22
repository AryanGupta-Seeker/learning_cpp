// Check even or odd
#include <iostream>
using namespace std;
bool isEven(int n) {
    return n % 2 == 0;
}
int main() {
    int number = 10;
    if (isEven(number)) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    return 0;
}