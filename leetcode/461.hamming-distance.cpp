/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int add = x ^y; // we use xor first then use and operator 
        int count =0;
        for(int i = 0;i<32;i++){
            if(((add>>i)&1)==1){
                count++;
            }
        }
        return count;

    }
};
// @lc code=end

