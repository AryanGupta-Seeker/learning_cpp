<<<<<<< HEAD
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
=======
// Implement stack using array
#include<iostream>
using namespace std;
#define SIZE 100

class Stack {
    int arr[SIZE];
    int top;
public:
    Stack() { top = -1; }
    void push(int x) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }
    int peek() {
        if (top < 0) {
            cout << "Stack Empty\n";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() { return top < 0; }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element is " << s.peek() << endl;
    s.pop();
    cout << "Top element is " << s.peek() << endl;
>>>>>>> 9a5d69862f24759f79e5fee3ad300add107018df
    return 0;
}
