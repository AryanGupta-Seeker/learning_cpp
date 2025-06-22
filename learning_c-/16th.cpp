// Copy one array to another
#include <iostream>
using namespace std;
int main() {
    int arr1[5], arr2[5];
    cout << "Enter 5 numbers for the first array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    // Copying elements from arr1 to arr2
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Elements of the second array after copying: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}