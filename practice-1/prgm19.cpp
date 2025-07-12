// Abstraction Example
#include<iostream>
using namespace std;

class Basic {
public:
    void sum(int a, int b) {
        cout << "Addition: " << (a + b) << endl;
    }

    void subtract(int a, int b) {
        cout << "Subtraction: " << (a - b) << endl;
    }
};

int main() {
    Basic s;
    s.sum(1, 2);          
    s.subtract(50, 10);   
    return 0;
}
