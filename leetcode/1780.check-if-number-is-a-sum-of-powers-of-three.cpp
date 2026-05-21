/*
 * @lc app=leetcode id=1780 lang=cpp
 *
 * [1780] Check if Number is a Sum of Powers of Three
 */

// @lc code=start
class Solution
{
public:
    // ///this functio is for approach 3 👇👇👇👇👇👇👇
    int solve(int n, int p)
    {
        if (n == 0)
        {
            return true;
        }
        if (pow(3, p) > n)
        {
            return false;
        }
        bool p_ko_lo = solve(n - pow(3, p), p + 1);
        bool p_ko_mat_lo = solve(n, p + 1);
        return p_ko_lo || p_ko_mat_lo;
    }

    bool checkPowersOfThree(int n)
    {
        // // aproact 1
        // int p=0 ;
        // while (pow(3,p)<=n){
        //     p++;
        // }
        // while (n>0){
        //     if(n>=pow(3,p)){
        //         n=n-pow(3,p);
        //     }
        //     if(n>=pow(3,p)){
        //        return false ;
        //     }
        //     p--;
        // }
        // return true;
        // //// approach 2
        // while (n>0){
        //     if(n%3==2){
        //         return false;
        //     }
        //     n=n/3;
        // }
        // return true;
        ///////// aproach 3
        return solve(n, 0);
    }
};
// @lc code=end
