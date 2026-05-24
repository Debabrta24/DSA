/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int size = digits.size();
        int i= size - 1;
        while (i >= 0)
        {
            if (digits[i] < 9)
            {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
            i--;
        }
        digits.insert(begin(digits),1);
        return digits;
    }
};
