// sort a vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3, 1, 4, 2, 5};
    sort(v.begin(), v.end());
    for (int i : v) cout << i << " ";
    return 0;
}
