// Find element in vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    int key = 30;
    if (find(v.begin(), v.end(), key) != v.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";
    return 0;
}
