// count character
#include <iostream>
using namespace std;
int main() {
    string str = "apple";
    int freq[26] = {0};
    for (char c : str)
        freq[c - 'a']++;
    for (int i = 0; i < 26; i++)
        if (freq[i])
            cout << char(i + 'a') << ": " << freq[i] << endl;
    return 0;
}
