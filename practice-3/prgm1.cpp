// Object slicing
#include<iostream>
using namespace std;
class Vinay{
  public:
     void show(){
        cout<<"Here is bhaiya";
     }
};
class Ankit : public Vinay{
    public:
      void show(){
        cout<<"Here is Ankit";
      }
};
int main()
{
    Ankit a;
    Vinay v=a;
    v.show();
    return 0;

}