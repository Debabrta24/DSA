/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
class Solution
{
public:
    int findComplement(int num)
    {
        int i = 0;
        int complement = 0;
        while (num)
        {
            if (!(num & 1))
            {
                complement |= (1 << i);
            }
            num >>= 1;
            i++;
        }
        return complement;
    }
};
// @lc code=end
