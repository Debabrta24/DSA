/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution
{
public: //// int solve(int n, vector<int>& dp) {
    ////     if (n <= 1) {
    ////         return n;
    ////     }
    ////     if (dp[n] !=- 1) {
    ////         return dp[n];
    ////     }
    ////     return dp[n]=solve (n-1,dp)+solve (n-2,dp);
    //// }
    int fib(int n)
    {
        // //methode1  without memorizartion
        // if(n<=1 ){ // lowest possible vaild value of recurtion
        //     return n;
        // };
        // return fib(n-1)+fib(n-2);

        // // now with memorization with optimal solution approach 2
        // if (n <= 1) { // lowest possible vaild value of recurtion
        //     return n;
        // };
        // vector<int> dp(n + 1, -1);
        // return solve(n,dp);

        // now approach3 here we use o(n) tc
        // vector<int> dp(n + 1, -1);
        // if (n <= 1) {
        //     return n;
        // }
        // dp[0] = 0;
        // dp[1] = 1;
        // for (int i = 2; i <= n; i++) {
        //     dp[i] = dp[i - 1] + dp[i - 2];
        // }
        // return dp[n];

        // now approach4  here you can use sc also o(1)
        int a = 0, b = 1, c;
        if (n <= 1)
        {
            return n;
        }
        for (int i = 1; i < n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};
// @lc code=end
