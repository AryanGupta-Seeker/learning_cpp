#include<iostream>
using namespace std;
class Counter{
    public:
    static int count;
    void increase(){
        count++;
        cout<<count<<endl;
    }
};
int Counter::count=0;
int main(){
    Counter a,b,c;
    a.increase();
    b.increase();
    c.increase();
}