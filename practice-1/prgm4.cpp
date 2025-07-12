//  Area of shapes(Function overloading)
#include<iostream>
using namespace std;
int area(int side){
    return side*side;
}
int area(int l,int b){
    return l*b;
}
int main()
{
    cout<<"Square :"<<area(5)<<endl;
    cout<<"Rectangle :"<<area(4,6)<<endl;
    return 0;
}