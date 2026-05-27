/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int i = 0, j = 1, profit, maxProfit = 0;
        while (j < prices.size())
        {
            if (prices[i] < prices[j])
            {

                profit = prices[j] - prices[i];
                maxProfit = max(maxProfit, profit);
            }
            else
            {
                i = j;
            }
            j++;
        }
        return maxProfit;
    }
};
// @lc code=end
