#include<iostream>
using namespace std;
class Counter{
    public:
    static void increment(){
          int count=0;
        count++;
        cout<<count;
    }
};
int main(){
    Counter::increment();
    return 0;
}