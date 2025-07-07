// Add two number(Using global variable)
#include <iostream>
using namespace std;

int a = 5, b = 10;

int add() {
    return a + b;
}

int main() {
    cout << "Sum: " << add();
    return 0;
}
