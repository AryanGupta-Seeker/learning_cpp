// Check if vector is empty
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    if (v.empty())
        cout << "Vector is empty";
    else
        cout << "Vector is not empty";
    return 0;
}
