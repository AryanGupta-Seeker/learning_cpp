// Calculate power
#include<iostream>
#include<cmath>
using namespace std;

double power(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    double x = 2;
    int y = 3;
    cout << x << "^" << y << " = " << power(x, y) << endl;
    return 0;
}
