// Search element in array
#include <iostream>
using namespace std;

int search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main() {
    int arr[] = {10, 5, 3, 7, 9}, key;
    cout << "Enter value to search: ";
    cin >> key;

    int index = search(arr, 5, key);
    if (index != -1)
        cout << "Found at index: " << index;
    else
        cout << "Not found";
    return 0;
}
