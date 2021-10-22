
#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    //right shifting a array
    {
        while (k > nums.size())
        {
            k = k - nums.size();
        }
        if (nums.size() > 1)
        {
            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.begin() + k);
            reverse(nums.begin() + k, nums.end());
        }
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i];
        }
    }
};
int main()
{
    vector<int> nums(7);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int target;
    cin >> target;
    class Solution sob;
    sob.rotate(nums, target);
}