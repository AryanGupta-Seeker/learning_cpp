// Diamond problem using virtual function in inheritance
#include<iostream>
using namespace std;
class Grandfather{
 public:
   void show(){
      cout<<"dadda is a very good aadmi";
   }
};
class Father : virtual public Grandfather{};
class Mother : virtual public Grandfather{};
class Ankit : public Father , public Mother{};
int main(){
    Ankit obj;
    obj.show();
    return 0;
}