// Count vowel in a string
#include<iostream>
using namespace std;
int main()
{
    string str="aryan";
    int count = 0;
    for(char ch : str)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) {
            count++; 
        }
    }
    cout<<"Vowels :"<<count;
    return 0;
}