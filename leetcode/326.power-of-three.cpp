/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
           // methode 1
        if (n <= 0) {
            return false;
        }
        if (n == 3) {
            return true;
        }
        return n % 3 == 0 && isPowerOfThree(n / 3);
        // //metode two 
        //  if (n <= 0)
        // {
        //     return false;
        // }
        // return 1162261467 % n == 0;
    }
};
// @lc code=end

