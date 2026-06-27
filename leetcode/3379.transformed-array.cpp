/*
 * @lc app=leetcode id=3379 lang=cpp
 *
 * [3379] Transformed Array
 */

// @lc code=start
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);
        for (int i = 0; i <n; i++) {
            int shift = nums[i] % n; /// reducing to n-1;
            int newidx = (i + shift) % n;
            if (newidx < 0) {
                newidx += n;
            }
            result[i] = nums[newidx];
        }
        return result;
    }
};
// @lc code=end

