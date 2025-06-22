// Search an element in the array
#include <iostream>
using namespace std;
int main() {
    int arr[5], search, found = 0;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            found = 1; // Element found
            break;
        }
    }

    if (found) {
        cout << "Element " << search << " is present in the array." << endl;
    } else {
        cout << "Element " << search << " is not present in the array." << endl;
    }

    return 0;
}