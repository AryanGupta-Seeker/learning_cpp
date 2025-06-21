//Find maximum element in the array
#include <iostream>
using namespace std;
int main()
{
    int arr[5], max;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    max = arr[0]; // Assume first element is the maximum
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }
    cout << "Maximum element in the array is: " << max << endl;
    return 0;
}