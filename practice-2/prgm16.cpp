// Abstraction
#include<iostream>
using namespace std;
class Account{
    private:
    int balance;
    public:
    void setbalance(int b){
        balance=b;
    }
    void showbalance(){
        cout<<"Balance :"<<balance;
    }
};
int main()
{
    Account aryan;
    aryan.setbalance(100);
    aryan.showbalance();
    return 0;
}