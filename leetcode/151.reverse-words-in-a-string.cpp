/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        // story
        reverse(s.begin(), s.end());
        int i = 0, l = 0, r = 0, n = s.length();
        while (i < n) {
            while (i < n && s[i] !=' ') {
                s[r++] = s[i++];
            }
            if (l < r) { // l
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;
        }
        s=s.substr(0,r-1);
        return s ;
    }
};
// @lc code=end

