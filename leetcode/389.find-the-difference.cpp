/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    // // approach 1 this is not best methode sc=O(n)
    // char findTheDifference(string s, string t) {
    //     unordered_map<char, int> map;
    //     for (char& ch : s) {
    //         map[ch]++;
    //     }
    //     for (char& ch : t) {
    //         map[ch]--;
    //         if (map[ch]<0) {
    //             return ch;
    //         }
    //     }
    //     return 'c'; // this steps never excuted
    // }

    //// approach_2________Tc=O(n);

    // char findTheDifference(string s, string t) {
    //     int sumOfs = 0, sumOft = 0;
    //     for (char& ch : s) {
    //         sumOfs += ch;
    //     }
    //     for (char& ch : t) {
    //         sumOft += ch;
    //     }
    //     // sum_t>sum_s
    //     return (char)(sumOft - sumOfs);
    // }
    ///// approach____3____ by_xor_methode_____________________
    char findTheDifference(string s, string t) {
        int XOR = 0;
        for (char &ch : s) {
            XOR ^= ch;
        }
        for (char &ch : t) {
            XOR ^= ch;
        }
        return (char)XOR;
    }
};
// @lc code=end

