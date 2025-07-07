// Using vector in function(Pass by reference)
#include <iostream>
#include <vector>
using namespace std;

void modify(vector<int> &v) {
    v[0] = 99;
}

int main() {
    vector<int> v = {1, 2, 3};
    modify(v);
    for (int i : v) cout << i << " ";
    return 0;
}
