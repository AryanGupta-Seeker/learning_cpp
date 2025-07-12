// static keyword inside a function
#include<iostream>
using namespace std;
class Counter{
    public:
     void showCount(){
        static int count=0;
        count++;
        cout<<"Function called :"<<count<<"  times"<<endl;
     }
};
int main()
{
    Counter obj;
    obj.showCount();
    obj.showCount();
    obj.showCount();
    obj.showCount();
    return 0;
}