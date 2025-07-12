// Reverse the vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseVector(vector<int> &v)
{
    reverse(v.begin(),v.end());
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    reverseVector(nums);
    for(int x : nums)
    cout<< x << " ";
    return 0;
}