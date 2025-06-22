// Find minimum and maximum
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 7, 1, 9, 3};
    int maxVal = *max_element(v.begin(), v.end());
    int minVal = *min_element(v.begin(), v.end());
    cout << "Max: " << maxVal << "\nMin: " << minVal;
    return 0;
}
