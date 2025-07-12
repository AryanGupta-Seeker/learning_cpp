// Allocate memory for an int
#include<iostream>
using namespace std;

int main() {
    int *p = new int;      
    *p = 10;              
    cout << *p << endl;    
    delete p;              
    return 0;
}
