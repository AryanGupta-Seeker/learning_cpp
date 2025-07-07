// Copy one array to another
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5}, b[5];
    copy(a, a + 5, b);
    cout << "Copied Array: ";
    for (int x : b) cout << x << " ";
    return 0;
}

