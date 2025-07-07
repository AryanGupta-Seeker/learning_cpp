// Reverse array
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int start = 0, end = 4;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++; end--;
    }

    cout << "Reversed Array: ";
    for (int x : arr) cout << x << " ";
    return 0;
}
