// Fibonacci series using pass by reference
#include<iostream>
using namespace std;
int fibonacci(int &n){
    if (n <= 1) return n; 
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b; 
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Not valid" << endl;
    } else {
        cout << "Fibonacci series up to " << num << ": ";
        for (int i = 0; i < num; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }
    return 0;
}