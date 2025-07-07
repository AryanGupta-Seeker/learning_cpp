// Insert and delete element
 #include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    v.push_back(40);           // Insert
     v.pop_back();              // Delete last element

    v.insert(v.begin() + 1, 15);  // Insert at position 1
    v.erase(v.begin());          // Delete first element

    for (int i : v) cout << i << " ";
    return 0;
}
