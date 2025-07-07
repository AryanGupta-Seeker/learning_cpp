// Remove duplicates using set
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 4, 4};
    set<int> s(v.begin(), v.end());
    for (int i : s) cout << i << " ";
    return 0;
}