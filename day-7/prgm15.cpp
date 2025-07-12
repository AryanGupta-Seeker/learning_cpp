// sort vector elements
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortVector(vector<int>&v)
{
    sort(v.begin(),v.end());
}
int main()
{
    vector<int>nums={5,3,2,4};
    sortVector(nums);
    for(int x : nums)
    cout<< x << " ";
    return 0;
}