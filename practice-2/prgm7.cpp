// Multilevel Inheritance
#include<iostream>
using namespace std;
class Dadda{
   public:
     void showDadda(){
        cout<<"Here is dadda"<<endl;
     }
};
class Pappa : public Dadda{
    public:
    void showPappa(){
        cout<<"Here is pappa"<<endl;
    }
};
class Ankit : public Pappa{
   public:
   void showAnkit(){
    cout<<"Here is Ankit"<<endl;
   }
};
int main(){
    Ankit aryan;
    aryan.showDadda();
    aryan.showPappa();
    aryan.showAnkit();
    return 0;
}