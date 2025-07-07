// Find duplicate elements
#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 2, 4, 1};
    bool visited[100] = {false};

    cout << "Duplicates: ";
    for (int i = 0; i < 6; i++) {
        if (visited[arr[i]])
            cout << arr[i] << " ";
        else
            visited[arr[i]] = true;
    }
    return 0;
}
