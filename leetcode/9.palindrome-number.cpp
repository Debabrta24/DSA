/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        int num = x, ans = 0, rem;
        if (x < 0) {
            return false;
        }
        while (num) {
            rem = num % 10;
            num /= 10;
            if (ans > INT_MAX/10)
                return false;

            ans = ans * 10 + rem; // this line is giving integer overflow so we add upeer two line 
        }
        if (ans == x) {
            return true;
        } else
            return false;
    }
};
// @lc code=end

