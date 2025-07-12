// Construtor with default argument in inheritance
#include<iostream>
using namespace std;

class Base {
public:
    Base(int x = 0) {
        cout << "Base Constructor x = " << x << endl;
    }
};

class Derived : public Base {
public:
    Derived(int y = 0) : Base(y) {
        cout << "Derived Constructor y = " << y << endl;
    }
};

int main() {
    Derived d1;
    Derived d2(50);
    return 0;
}
