/*
 * @lc app=leetcode id=1498 lang=cpp
 *
 * [1498] Number of Subsequences That Satisfy the Given Sum Condition
 */

// @lc code=start
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int M=1e9+7;
        int n= nums.size(),result=0;
        sort (begin(nums),end(nums)); //sort
        vector<int>power(n);
        power [0]=1;
        for(int i =1;i<n;i++){
            power[i]=(power[i-1]*2 )%M;
        }
        int l=0,r=n-1;
        //3
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                int diff= r-l;
                result =(result%M+power[diff])%M;
                l++;
            }
            else {
                r--;
            }
        }
        return result ;
    }

};
// @lc code=end

