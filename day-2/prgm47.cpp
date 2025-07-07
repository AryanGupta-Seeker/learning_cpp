// Count even and odd numbers
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 11, 14}, even = 0, odd = 0;
    for (int i = 0; i < 5; i++)
        (arr[i] % 2 == 0) ? even++ : odd++;
    cout << "Even: " << even << ", Odd: " << odd;
    return 0;
}
