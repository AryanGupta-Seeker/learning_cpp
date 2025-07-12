// Friend function from another class
#include<iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int a;
public:
    A() : a(10) {}
    friend void display(A, B);
};

class B {
private:
    int b;
public:
    B() : b(20) {}
    friend void display(A, B);
};

void display(A x, B y) {
    cout << "A: " << x.a << ", B: " << y.b << endl;
}

int main() {
    A obj1;
    B obj2;
    display(obj1, obj2);
}
