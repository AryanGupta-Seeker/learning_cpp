// Delete last elemengt in the vector
#include<iostream>
#include<vector>
using namespace std;
void removeLast(vector<int>& v)
{
    if(! v.empty())
    v.pop_back();
}
int main()
{
    vector<int>nums={10,20,30};
    removeLast(nums);
    for(int x : nums)
    cout<< x << " ";
    return 0;
}