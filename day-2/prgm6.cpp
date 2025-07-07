// Reverse a vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    reverse(v.begin(), v.end());
    for (int i : v) cout << i << " ";
    return 0;
}
