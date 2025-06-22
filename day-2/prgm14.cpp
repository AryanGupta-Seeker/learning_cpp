// Resize a vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2};
    v.resize(5);  // Resizes to 5 elements, fills remaining with 0
    for (int i : v) cout << i << " ";
    return 0;
}
