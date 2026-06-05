/*
 * @lc app=leetcode id=1877 lang=cpp
 *
 * [1877] Minimize Maximum Pair Sum in Array
 */

// @lc code=start
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int i =0,j=nums.size()-1,result =0;
        while(i<j){
            int sum =nums[i]+nums[j];
            result=max(result,sum);
            i++;
            j--;
        }
        return result;
    }
};
// @lc code=end

