/*
 * @lc app=leetcode id=2264 lang=cpp
 *
 * [2264] Largest 3-Same-Digit Number in String
 */

// @lc code=start
class Solution
{
public:
     string largestGoodInteger(string num) {
        int length = num.length();
        char maxChar = ' ';
        for (int i = 2; i < length; i++) {
            if (num[i] == num[i - 1] && num[i] == num[i - 2]) { // 3 length ka unique degit
                maxChar = max(maxChar, num[i]);
            }
        }
        if(maxChar==' '){
            return "";
        }
        return string (3,maxChar);
    
    }
};
// @lc code=end
