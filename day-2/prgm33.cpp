// Concatinate two string using append
#include <iostream>
using namespace std;
int main() {
    string a = "Hello ", b = "World";
    a.append(b);
    cout << "Concatenated: " << a;
    return 0;
}
