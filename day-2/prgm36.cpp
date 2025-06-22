// Check vowels in a string(Using function and switch)
#include <iostream>
using namespace std;
bool isVowel(char c) {
    switch (tolower(c)) {
        case 'a': case 'e': case 'i': case 'o': case 'u': return true;
        default: return false;
    }
}
int main() {
    string str = "education";
    int count = 0;
    for (char c : str)
        if (isVowel(c)) count++;
    cout << "Vowel count: " << count;
    return 0;
}
