// function overloading
#include<iostream>
using namespace std;
class Quadrilateral{
    public:
    int shape(int s){
        cout<<"Square :";
        return s*s;
    }
    double shape(double a, double b){
        cout<<"Rectangle :";
        return a*b;
    }
    int shapeVolume(int l){
        cout<<"Volume :";
        return l*l*l;
    }
};
int main(){
    Quadrilateral q;
    cout<<q.shape(2)<<endl;
    cout<<q.shape(2.3,3.5)<<endl;
    cout<<q.shapeVolume(4)<<endl;
    return 0;
}