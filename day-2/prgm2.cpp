// Input and output vector element
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> x;
        v.push_back(x);
    }
    cout << "Vector: ";
    for (int i : v) cout << i << " ";
    return 0;
}

