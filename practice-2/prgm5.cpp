// Function overloading
#include<iostream>
using namespace std;
class Calculation{
    public:
    int calculator(int a,int b){
        return a+b;
    }
    double calculator(double c,double d){
        return c-d;
    }
    int calculator(int e){
        return e*e;
    }
};
int main(){
    Calculation calc;
    cout<<calc.calculator(2,3)<<endl;
    cout<<calc.calculator(5,3)<<endl;
    cout<<calc.calculator(2)<<endl;
    return 0;
}