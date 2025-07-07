// clear a vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.clear();
    cout << "Size after clear: " << v.size();  // Output: 0
    return 0;
}
