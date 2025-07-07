// Sum of vector elements
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {5, 10, 15, 20};
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum: " << sum;
    return 0;
}
