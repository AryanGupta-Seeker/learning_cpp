// Check positive or negative
#include<iostream>
using namespace std;

string checkSign(int n) {
    return (n > 0) ? "Positive" : (n < 0) ? "Negative" : "Zero";
}

int main() {
    int num = -5;
    cout << "Number is: " << checkSign(num) << endl;
    return 0;
}
