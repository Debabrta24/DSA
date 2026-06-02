/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start

class Solution {
public:
    // // approach_2_best_approach
    // int numberOfMatches(int n) { return (n - 1); }
    // approach_1_not_best_approach
    int numberOfMatches(int n) {
        int matches = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                matches += n / 2;
                n = n / 2;
            } else {
                matches += (n - 1) / 2;
                n = ((n - 1) / 2) + 1;
            }
        }
        return matches;
    }
    };
