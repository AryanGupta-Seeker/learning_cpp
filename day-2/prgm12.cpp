// Get first and last element
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    cout << "First: " << v.front() << "\n";
    cout << "Last: " << v.back();
    return 0;
}
