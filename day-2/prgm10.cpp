// Vector of strings
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> names = {"Ram", "Shyam", "Geeta"};
    for (string name : names)
        cout << name << "\n";
    return 0;
}
