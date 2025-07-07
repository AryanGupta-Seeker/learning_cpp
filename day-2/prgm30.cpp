// Reverse a number using string
#include <iostream>
#include <algorithm>
using namespace std;

int reverseNum(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main() {
    cout << "Reverse: " << reverseNum(1234);
    return 0;
}
