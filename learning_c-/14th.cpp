// Find minimum element in the array
#include <iostream>
using namespace std;
int main() {
    int arr[5], min;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    min = arr[0]; // Assume first element is the minimum
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }
    cout << "Minimum element in the array is: " << min << endl;
    return 0;
}