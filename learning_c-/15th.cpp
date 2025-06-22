// Reverse an array
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Reversed array: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}