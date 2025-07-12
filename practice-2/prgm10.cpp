// Hybrid Inheritance
#include<iostream>
using namespace std;
class Dadda{
    public:
    void showDadda(){
        cout<<"here is dadda"<<endl;
    }
};
class Pappa : public Dadda{
      public:
         void showPappa(){
            cout<<"Here is pappa"<<endl;
         }
};
class Mamma{
    public:
    void showMamma(){
        cout<<"here is mamma"<<endl;
    }
};
class Ankit : public Pappa,public Mamma{
    public:
    void showAnkit(){
        cout<<"here is Ankit"<<endl;
    }
};
int main()
{
    Ankit obj;
    obj.showDadda();
    obj.showPappa();
    obj.showMamma();
    obj.showAnkit();
    return 0;
}