// Find next greater element using stack
#include<iostream>
#include<stack>
using namespace std;

void nextGreater(int arr[], int n) {
    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[i] > s.top()) {
            cout << s.top() << " --> " << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while (!s.empty()) {
        cout << s.top() << " --> -1" << endl;
        s.pop();
    }
}

int main() {
    int arr[] = {4, 5, 2, 25};
    nextGreater(arr, 4);
    return 0;
}
