/*
 * @lc app=leetcode id=3713 lang=cpp
 *
 * [3713] Longest Balanced Substring I
 */

// @lc code=start
class Solution {
public:
    bool checkedBalenced(vector<int>& freq) {
        int common = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0)
                continue;
            if (common == 0)
                common = freq[i];
            else if (freq[i] != common) {
                return false;
            }
        }
        return true;
    }
    int longestBalanced(string s) {
        int n = s.length();
        int maxL = 0;
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;
                if (checkedBalenced(freq)) {
                    maxL = max(maxL, j - i + 1);
                }
            }
        }
        return maxL;
    }
};
// @lc code=end

