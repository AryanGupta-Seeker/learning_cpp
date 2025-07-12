#include<iostream>
using namespace std;
class Counter{
    public:
    
    void increment(){
        static int count=0;
        count++;
         cout<<count;
    }
   
};
int main()
{
    Counter c;
    c.increment();
    return 0;
}