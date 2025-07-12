// Multiple Inheritance
#include<iostream>
using namespace std;
class Pappa{
    public:
    void showPappa(){
        cout<<"Here is papa"<<endl;
    }
};
class Mammy {
    public:
    void showMammy(){
        cout<<"Here is mammy"<<endl;
    }
};
class Ankit : public Pappa , public Mammy{
    public:
    void showAnkit(){
        cout<<"Here is Ankit";
    }
};
int main(){
    Ankit obj;
    obj.showPappa();
    obj.showMammy();
    obj.showAnkit();
    return 0;

}