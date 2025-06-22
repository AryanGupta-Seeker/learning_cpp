// Count occurences of an element
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 2, 4};
    int count2 = count(v.begin(), v.end(), 2);
    cout << "2 appears " << count2 << " times.";
    return 0;
}
