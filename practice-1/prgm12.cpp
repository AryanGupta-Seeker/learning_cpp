// Access private data of one class
#include<iostream>
using namespace std;

class Box {
private:
    int length;
public:
    Box() : length(10) {}
    friend void show(Box);
};

void show(Box b) {
    cout << "Length: " << b.length << endl;
}

int main() {
    Box b;
    show(b);
}
