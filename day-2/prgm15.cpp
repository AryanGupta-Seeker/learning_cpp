// Using vector in function (Pass by value )
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    for (int i : v) cout << i << " ";
}

int main() {
    vector<int> v = {5, 10, 15};
    print(v);
    return 0;
}
