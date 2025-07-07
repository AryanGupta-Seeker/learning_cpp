// Abstraction
#include<iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

int main() {
    Dog d;
    d.sound();  // Output: Dog barks
    return 0;
}
