/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x < 2)
        {
            return x;
        }
        int ans = 0, start = 1, end = x, mid;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (mid == x / mid)
            {
                ans = mid;
                break;
            }
            else if (mid < x / mid)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end
