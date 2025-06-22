// count even or odd numbers
#include <iostream>
using namespace std;
int main() {
    int arr[5], evenCount = 0, oddCount = 0;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment even count
        } else {
            oddCount++; // Increment odd count
        }
    }
    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;
    return 0;
}