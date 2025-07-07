// Merge two array
#include <iostream>
using namespace std;
int main()
{
    int arr1[5], arr2[5], merged[10];
    cout << "Enter 5 numbers for the first array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 5 numbers for the second array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }

    // Merging the two arrays
    for (int i = 0; i < 5; i++) {
        merged[i] = arr1[i];
        merged[i + 5] = arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < 10; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}