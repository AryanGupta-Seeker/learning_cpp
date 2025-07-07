// Remove all spaces
#include <iostream>
using namespace std;
int main() {
    string str = "Hello World", result = "";
    for (char c : str)
        if (c != ' ') result += c;
    cout << "No spaces: " << result;
    return 0;
}
