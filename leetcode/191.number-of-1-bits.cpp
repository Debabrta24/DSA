/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(int n) {
            // method1
        //  int count = 0;
        //  for(int i = 31;i>=0;i--){
        //      if((n>>i)&1==1){
        //          count ++;
        //      }
        //  }
        //  return count ;
        // methode2
        //  int count = 0;
        //  while(n>0){
        //      n = n& (n-1);
        //      count ++;
        //  }
        //  return count ;
        // methode 3
        // int count =0 ;
        // while (n != 0) {
        //     count += (n % 2);
        //     n = n / 2;
        // }
        // return count;
        //methode 4 by in build function 
        return __builtin_popcount(n);
    }
};
// @lc code=end

