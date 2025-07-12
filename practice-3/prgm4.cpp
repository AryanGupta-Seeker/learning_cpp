// Diamond Problem
#include<iostream>
using namespace std;
class Dada{
    public:
    void show(){
        cout<<"Dada is here";
    }
};
class Father : virtual public Dada{

};
class Mother : virtual public Dada{

};
class Ankit : public Father , public Mother{

};
int main(){
    Ankit obj;
    obj.show();
    return 0;
}
