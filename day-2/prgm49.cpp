// sort array in ascending order
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 1, 3};
    sort(arr, arr + 5);
    cout << "Sorted Array: ";
    for (int x : arr) cout << x << " ";
    return 0;
}
