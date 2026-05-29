/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
    // 1,2,3,4,5,6,7 take use example 
public:
    void rotate(vector<int>& nums, int k) {
      k %=nums.size();
      reverse(nums.begin(),nums.end()); //7,6,5,4,3,2,1
      reverse(nums.begin(),nums.begin()+k); //5,6,7,4,3,2,1
      reverse(nums.begin()+k,nums.end()); //5,6,7,1,2,3,4
    }
};
// @lc code=end

