// Hierarchical Inheritance
#include<iostream>
using namespace std;
class Father{
  public:
  void showFather(){
    cout<<"Here is father"<<endl;
  }
};
class Ankit : public Father{
    public:
      void showAnkit(){
        cout<<"Here is Ankit"<<endl;
      }
};
class Vinay : public Father{
 public:
 void showVinay(){
    cout<<"here is Vinay"<<endl;
 }
};
int main()
{
    Ankit a;
    Vinay v;
    a.showFather();
    a.showAnkit();
    v.showFather();
    v.showVinay();
    return 0;
}