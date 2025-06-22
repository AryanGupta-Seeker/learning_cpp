// Calculate simple interest
#include <iostream>
using namespace std;
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
int main() {
    float principal = 1000.0, rate = 5.0, time = 2.0;
    float interest = calculateSimpleInterest(principal, rate, time);
    cout << "Simple Interest for Principal: " << principal 
         << ", Rate: " << rate 
         << ", Time: " << time 
         << " is: " << interest << endl;
    return 0;
}