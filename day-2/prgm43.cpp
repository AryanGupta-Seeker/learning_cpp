// Find minimum element in the array
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {10, 30, 5, 70, 2};
    int *minPtr = min_element(arr, arr + 5);
    cout << "Minimum: " << *minPtr;
    return 0;
}
