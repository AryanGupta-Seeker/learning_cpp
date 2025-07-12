// Modify elements in the vector
#include<iostream>
#include<vector>
using namespace std;
void doubleelements(vector<int>& v)
{
    for(int &x : v)
    x*=2;
}
int main()
{
    vector<int> nums = {1,2,3,4,5};
    doubleelements(nums);
    for(int x : nums)
    cout<< x << " ";
    return 0;
}