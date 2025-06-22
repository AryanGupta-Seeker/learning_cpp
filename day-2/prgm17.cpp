// 2D Vector (Matrix)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2}, {3, 4}};
    for (auto row : matrix) {
        for (int col : row)
            cout << col << " ";
        cout << endl;
    }
    return 0;
}
