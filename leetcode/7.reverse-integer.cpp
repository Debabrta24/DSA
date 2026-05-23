/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int num = x;
        int ans = 0;
        while (num)
        {
            int rem = num % 10;
            num /= 10;
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
            {
                return 0;
            }
            ans = ans * 10 + rem;
        }
        return ans;
    }
};
// @lc code=end
