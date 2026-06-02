/*
 * @lc app=leetcode id=1464 lang=cpp
 *
 * [1464] Maximum Product of Two Elements in an Array
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //////approach_1
        // int curr_max=nums[0];
        // int result =0;
        // for(int i =1;i<nums.size();i++){
        //     result =max(result ,(nums[i]-1) * (curr_max-1));
        //     curr_max=max(curr_max,nums[i]);
        // }
        // return result;
        /////////// approach 2
        int largest = 0;
        int seond_largest = 0;
        int n = nums.size();
        for (int& num : nums) {
            if (num > largest) {
                seond_largest = largest;
                largest = num;
            }
            else{
                seond_largest=max(seond_largest,num);
            }
        }
        return (largest-1)*(seond_largest-1);
    }
};
// @lc code=end

