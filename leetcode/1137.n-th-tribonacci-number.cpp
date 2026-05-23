/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
// class Solution
// {

//     // //this solution is approach 2 
//     int t[38];
//     int solve(int n)
//     {
//         if (n == 0)
//         {
//             return 0;
//         }
//         if (n == 1 || n == 2)
//         {
//             return 1;
//         }
//         if(t[n]!=-1){
//             return t[n];
//         }
//         int a = solve (n-1);
//         int b = solve (n-2);
//         int c = solve (n-3);
//         return t[n]=a+b+c;
//     }

//     // // ///methode 1 all test case not pased
//     // int solve(int n)
//     // {
//     //     if (n == 0)
//     //         return 0;
//     //     if (n == 1 || n == 2)
//     //     {
//     //         return 1;
//     //     }
//     //     int a = solve(n - 1);
//     //     int b = solve(n - 2);
//     //     int c = solve(n - 3);
//     //     return a + b + c;
//     // }
// public:
//     // // ///methode 1 all test case not pased
//     // int tribonacci(int n)
//     // {
//     //     return solve(n);
//     // }

//     // methode2 all test case pass
//     // //this solution is approach 2  by memorizaion 
//     int tribonacci(int n)
//     {
//         memset(t, -1, sizeof(t));
//         return solve(n);
//     }
// };
// methode 3 with sc of o(n);
class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        int a = 0, b = 1, c = 1,d;
        for (int i = 3; i <= n; i++) {
             d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return d;
    }
};
// @lc code=end
