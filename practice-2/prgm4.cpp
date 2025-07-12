// Function overloading
#include<iostream>
using namespace std;
class Printer{
    public:
      void print(int a){
        cout<<"Interger :"<<a<<endl;
      }
      void print(double b){
        cout<<"Floating number :"<<b<<endl;
      }
      void print(string c){
        cout<<"String :"<<c<<endl;
      }
};
int main(){
    Printer p;
      p.print(123);
      p.print(2.3);
      p.print("Aryan");
      return 0;
}