// Reverse an array using stack
#include<iostream>
#include<stack>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    stack<int> s;
    for (int i = 0; i < 5; i++)
        s.push(arr[i]);

    for (int i = 0; i < 5; i++) {
        arr[i] = s.top();
        s.pop();
    }

    for (int i : arr)
        cout << i << " ";
    return 0;
}
