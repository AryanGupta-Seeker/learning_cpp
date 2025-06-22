// Find maximum element in the array
#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    return max(arr[n - 1], findMax(arr, n - 1));
}

int main() {
    int arr[5] = {10, 30, 5, 70, 40};
    cout << "Maximum: " << findMax(arr, 5);
    return 0;
}
