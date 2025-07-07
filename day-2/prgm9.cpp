// Copy vector to another
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = v1;  // Copy constructor
    for (int i : v2) cout << i << " ";
    return 0;
}
