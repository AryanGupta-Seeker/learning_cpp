// Find index of an element
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    auto it = find(v.begin(), v.end(), 30);
    if (it != v.end())
        cout << "Index: " << distance(v.begin(), it);
    else
        cout << "Not found";
    return 0;
}
