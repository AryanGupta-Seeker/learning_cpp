// Add element to vector
#include<iostream>
#include<vector>
using namespace std;
void addElement(vector<int>& v, int element){
   v.push_back(element);
}
int main()
{
    vector<int>nums;
    addElement(nums,10);
    addElement(nums,20);
    for(int i : nums)
    cout<<i<<" ";
    return 0;
}