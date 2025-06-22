// Input and output of array elements using array
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter 5 elements of the array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}