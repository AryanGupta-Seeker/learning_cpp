// Bank account example[Runtime ploymorphism]
#include<iostream>
using namespace std;
class Account{
    public:
    virtual void interestRate(){
        cout<<"generic account interest";
    }
};
class Savings : public Account{
    public:
    void interestRate() override{
        cout<<"Savings account interest";
    }
} ;
int main()
{
    Account *a;
    Savings s;
    a=&s;
    a->interestRate();
    return 0;
}