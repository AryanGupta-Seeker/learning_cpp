// Function overloading
#include<iostream>
using namespace std;
class Calculation{
    public:
   int add(int a,int b){
    return a+b;
   }
   double add(double a,double b){
    return a+b;
   }
};
int main()
{
    Calculation calc;
    cout<<calc.add(2,3)<<endl;
    cout<<calc.add(3.4,5.6);
    return 0;
}