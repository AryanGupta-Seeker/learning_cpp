// Sum of array element
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = accumulate(arr, arr + 5, 0);
    cout << "Sum: " << sum;
    return 0;
}
