/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // very  important question
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int remaing = target - nums[i];
            if (mp.find(remaing) != mp.end())
            {
                return {mp[remaing], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end
