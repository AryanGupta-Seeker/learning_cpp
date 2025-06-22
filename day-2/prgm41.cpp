// Input and out of array
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[5];
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Array is: ";
    printArray(arr, 5);
    return 0;
}
