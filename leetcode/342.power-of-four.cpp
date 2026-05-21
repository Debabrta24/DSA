/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        //     // methode 1
        //     if (n <= 0)
        //     {
        //         return false;
        //     }
        //     if (n == 1)
        //     {
        //         return true;
        //     }
        //     return n % 4 == 0 && isPowerOfFour(n / 4);
        // methode 2
        if (n <= 0)
        {
            return false;
        }
        return (1LL << 62) % n == 0; // 62 cause it is taking 0 to 63 and 63 not possible to 62
    }
};
// @lc code=end
