// Count word in a sentence
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string sentence="Aryan is a good boy";
    string word;
    int count = 0;
    stringstream ss(sentence);
    while (ss >> word) {
        count++; 
    }
    cout << "Number of words: " << count << endl; 
    return 0;
}
