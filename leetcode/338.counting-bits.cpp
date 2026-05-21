/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> result(n + 1);
        // methode 1
        // for(int i = 0;i<n+1;i++){
        //     result[i]=__built_popcount(i);
        // }
        // return result;
        // merthode2
        if (n == 0)
        {
            return result;
        }
        result[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                result[i] = result[i / 2]+1;
            }
            else {
                result[i]=result[i/2];
            }
        }
        return result;
    }
};
// @lc code=end
