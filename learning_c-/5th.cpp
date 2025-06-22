// Find maximum of numbers
#include <iostream>
using namespace std;
int findMax(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int num1 = 10, num2 = 20;
    cout << "Maximum of " << num1 << " and " << num2 << " is: " << findMax(num1, num2) << endl;
    return 0;
}