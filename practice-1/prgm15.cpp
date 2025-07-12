// Friend Function Overloading << Operator
#include<iostream>
using namespace std;

class Test {
private:
    int data;
public:
    Test(int d) : data(d) {}
    friend ostream& operator<<(ostream& out, Test t);
};

ostream& operator<<(ostream& out, Test t) {
    out << "Data: " << t.data;
    return out;
}

int main() {
    Test t1(42);
    cout << t1 << endl;
}
