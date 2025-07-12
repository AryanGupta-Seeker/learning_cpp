// static keyword shared across all objects
#include<iostream>
using namespace std;
class Student{
    public:
    static int count;
     Student(){
        count++;
     }
     void showCount(){
        cout<<"Current object count :"<<count<<endl;
     }
};
int Student::count=0;
int main(){
    Student s1;
    s1.showCount();
    Student s2;
    s2.showCount();
    return 0;
}