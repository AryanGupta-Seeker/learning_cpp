// Friend function Adding two object
#include<iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    friend int add(Number, Number);
};

int add(Number a, Number b) {
    return a.value + b.value;
}

int main() {
    Number n1(5), n2(7);
    cout << "Sum: " << add(n1, n2) << endl;
}
