// sort array in ascending order
#include <iostream>
using namespace std;
int main() {
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Sorting the array using bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}