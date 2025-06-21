// Check Prime nuumber using function
#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false; 
    for (int i = 2; i <= n/2; i++) 
    { 
        if (n % i == 0) return false; 
    }
    return true; 
}
int main()
{
    int num=7;
    cout<<num<<" is "<<(isPrime(num) ? "a prime number." : "not a prime number.") << endl;
    return 0;
}